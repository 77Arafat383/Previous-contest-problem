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


ll binex(ll a, ll  b)
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

ll binv(ll a)
{
    return binex(a,M-2)%M;
}

vector<ll>fact(3e5+10),finv(3e5+10),fk(3e5+10);

void facto()
{
    fact[0]=fact[1]=1;
    finv[0]=finv[1]=1;
    for(int i=1; i<=3e5+2; i++)
    {
        fact[i]=(fact[i-1]*i)%M;
        finv[i]=binv(fact[i]);
    }
    ll cr=1;fk[0]=1;
    for(int i=1;i<=300000;i++){
        fk[i]=fk[i-1]*cr;
        fk[i]%=M;
        cr+=2;
    }
}


ll comb(ll n, ll r)
{
    if(n<r) return 0LL;
    ll ans=((fact[n]*finv[r])%M*finv[n-r])%M;
    return ans%M;
}


void solve()
{
    ll n,k;
    cin>>n>>k;
    ll ans=0;
    for(int i=1; i<=k; i++)
    {
        ll r,c;
        cin>>r>>c;
        n--;
        if(r!=c) n--;
    }

    for(int r=0; r<=n; r++)
    {
        ll nr=n-r;
       if(nr&1LL) continue;
        nr/=2LL;
        ll dd=(comb(n,r)*binex(2LL,nr))%M * fk[nr];
        dd%=M;
        ans=(ans+dd)%M;
    }
    cout<<ans<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
 facto();
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}