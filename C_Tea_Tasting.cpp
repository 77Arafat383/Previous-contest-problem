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
    vector<ll>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    vector<ll>pref(n+1);
    for(int i=0; i<n; i++)
    {
        pref[i+1]=pref[i]+b[i];
    }
    pref.push_back(LLONG_MAX);
    
    vector<ll>imo(n+2),ans(n+2);

    for(int i=0; i<n; i++)
    {
        auto it=lower_bound(all(pref),pref[i]+a[i]);
        it--;
        imo[i]++;
        int idx=it-pref.begin();
        imo[idx]--;
        ans[idx]+=a[i]-(*it-pref[i]);

    }

    for(int i=1; i<n; i++) imo[i]+=imo[i-1];

    for(int i=0; i<n; i++)
    {
        cout<<(imo[i]*b[i]+ans[i])<<' ';
    }
    cout<<'\n';

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