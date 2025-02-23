//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    // ll n;
    // cin>>n;
    // vector<double>a(n),b(n);
    // for(auto &it:a) cin>>it;
    // for(auto &it:b) cin>>it;
    // map<double,ll>mp;
    // int cnt=0;
    // ll ans=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(a[i]==b[i] and a[i]==0) 
    //     {
    //         cnt++;
    //         continue;
    //     }
    //     if(a[i]==0 and b[i]!=0) continue;
    //     double d=0;
    //     d=b[i]/a[i];
    //     mp[d]++;
    //     ans=max(ans,mp[d]);

    // }
    // cout<<ans+cnt<<'\n';
    ll n;
    cin>>n;
    vector<ll>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    ll cnt=0,ans=0;
    map<pair<ll,ll>,ll>mp;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            if(b[i]==0) cnt++;
            continue;
        }
        else
        {
            ll d=__gcd(a[i],b[i]);
            a[i]/=d;
            b[i]/=d;
            ll vv=mp[{a[i],b[i]}]++;
            ans=max(ans,vv+1);
        }
    }
    cout<<ans+cnt<<'\n';
    
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}