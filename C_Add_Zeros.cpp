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
ll f(ll n, map<ll,vector<ll>>&graph,map<ll,ll>&dp )
{
    if(graph[n].empty()) return n;
    if(dp[n]) return dp[n];
    ll ans=0;
    for(auto &i:graph[n])
    {
        ans=max(ans,f(i,graph,dp));
    }
    return dp[n]=ans;
 }
void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    map<ll,vector<ll>>graph;
    map<ll,ll>dp;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        v[i]+=(i-1);
        if(i>1) graph[v[i]].push_back(v[i]+(i-1));
        // here creating graph to finding next v[i]
    }

    ll ans=f(n,graph,dp);
    cout<<ans<<en;
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}