//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M = 998244353;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;


ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1) ans=(ans*a)%M;
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}
vector<ll>fact(70),inv(70);

void facto()
{
    fact[0]=1;
    inv[0]=binex(fact[0],M-2)%M;
    for(int i=1; i<=60; i++)
    {
        fact[i]=(fact[i-1]*i)%M;
        inv[i]=binex(fact[i],M-2)%M;
    }

}
ll nCr(ll n, ll r)
{
    ll ans=fact[n];
    ans=(ans*inv[r])%M;
    ans=(ans*inv[n-r])%M;
    return ans%M;

}

void solve()
{
    facto();
    ll n,m;
    cin>>n>>m;
    bool ok=false;
    ll culpat=0;
    for(ll i=60; i>=0; i--)
    {
         if(ok)
         {
            culpat|=(1LL<<i);
         }
         if(n&(1LL<<i)) ok=true;
    }
    cout<<culpat<<en;
    n=(culpat&m);
    ll cnt=__builtin_popcountll(n);
    ll ans=0;
    for(ll i=1; i<cnt; i++)
    {
        ll dd=nCr(cnt,i);
        dd=(dd*i)%M;
        ans=(ans+dd)%M;

    }
    ans=(ans+cnt)%M;
    cout<<ans<<en;
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