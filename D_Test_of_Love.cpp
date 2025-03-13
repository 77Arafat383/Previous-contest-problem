//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;


ll f(int idx,int &n,int &m,vector<ll>&dp,string &str)
{
    if(idx>=si(str)) return 0;
    if(dp[idx]!=-1) return dp[idx];
     dp[idx]=1e12;
    if(str[idx]=='C') return dp[idx];
    else if(str[idx]=='L')
    {
        for(int i=1; i<=m; i++)
        {
            dp[idx]=min(dp[idx],f(idx+i,n,m,dp,str));
        }
    }
    else dp[idx]=min(dp[idx],f(idx+1,n,m,dp,str)+1);
    return dp[idx];

}

void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    string str;
    cin>>str;
    str='L'+str;
    n++;
    vector<ll>dp(n+2,-1);
    if(f(0,n,m,dp,str)<=k) cout<<"YES\n";
    else cout<<"NO\n";
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