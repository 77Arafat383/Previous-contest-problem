//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  998244353;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=2e6+10;




void solve()
{
    ll n;
    cin>>n;
    vector<ll>X(N+1,0),Y(N+1,0),a(n);
    for(auto &it:a) cin>>it;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        X[a[i]]=x;
    }
    ll m;
    cin>>m;
    vector<ll>b(m);
    for(auto &it:b) cin>>it;
    for(int i=0; i<m; i++)
    {
        ll x;
        cin>>x;
        Y[b[i]]=x;
    }
    ll ans=1;
    for(int i=1; i<N; i++)
    {
        if(X[i]<Y[i])
        {
            cout<<0<<en;
            return;
        }
        else if(X[i]>Y[i])
        {
            ans=(ans*2LL)%M;
            
        }
    }
    cout<<ans<<en;
    return;

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