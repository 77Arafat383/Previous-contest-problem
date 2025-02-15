//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(auto &it:a) cin>>it;
    ll mx=0;
    map<ll,ll>mp;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
       ans+=a[i];
       mp[a[i]]++;
       if(mp[a[i]]>=2) mx=max(mx,a[i]);
       a[i]=mx;
    }
    mp.clear();
    mx=0;
    for(int i=0; i<n; i++)
    {
       ans+=a[i];
       mp[a[i]]++;
       if(mp[a[i]]>=2) mx=max(mx,a[i]);
       a[i]=mx;
    }

    for(int i=n-1,j=1; i>=0; i--,j++)
    {
        ans+=a[i]*j;
    }
    cout<<ans<<en;

}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}