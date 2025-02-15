//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'

#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;
const int M =  1e9+7;
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

vector<ll>fact(3e6+10),finv(3e6+10);

void facto()
{
    fact[0]=fact[1]=1;
    finv[0]=finv[1]=1;
    for(int i=1; i<=3e6+2; i++)
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
    ll h,w,n;
    cin>>h>>w>>n;
    vector<ll>dp(3e6+10);
    vector<pair<ll,ll>>s(n+2);
    s[0]={0,0};
    s[n+1]={h-1,w-1};
    for(int i=1; i<=n; i++)
    {
        ll a,b;
        cin>>a>>b;
        a--;
        b--;
        s[i]={a,b};
    }
    sort(all(s));
    dp[0]=1;
    for(int i=1; i<=n+1; i++)
    {
        for(int j=0; j<i; j++)
        {
            if(s[j].first<=s[i].first and s[j].second<=s[i].second)
            {
                ll pa=comb(s[i].first-s[j].first+s[i].second-s[j].second,s[i].first-s[j].first);
                if(i<=n) dp[i]=(dp[i]+M-(dp[j]*pa)%M)%M;
                else dp[i]=(dp[i]+(dp[j]*pa)%M)%M;
            }
        }
    }

    cout<<dp[n+1]<<en;

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