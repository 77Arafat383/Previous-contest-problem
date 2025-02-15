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

vector<ll>fact(60+10),finv(60+10);

void facto()
{
    fact[0]=fact[1]=1;
    finv[0]=finv[1]=1;
    for(int i=1; i<=60; i++)
    {
        fact[i]=(fact[i-1]*i)%M;
        finv[i]=binv(fact[i]);
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
    facto();
    vector<vector<ll>>dp(62,vector<ll>(2,0));
    dp[2][0]=1;
    dp[2][1]=0;
    for(ll i=4; i<=60; i+=2)
    {
        dp[i][0]=(dp[i-2][1]+comb(i-1,i/2-1))%M;
        dp[i][1]=(comb(i,i/2)-dp[i][0]-1+M)%M;
    }
    int n;
    cin>>n;
    while(n--)
    {
        ll x;
        cin>>x;
        cout<<dp[x][0]<<' '<<dp[x][1]<<' '<<1<<en;
    }
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