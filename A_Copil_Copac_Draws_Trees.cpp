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


void dfs(int u, int p,vector<vector<pair<int,int>>>&graph,vector<int>&idx,vector<int>&dp)
{
    for(auto &[v,id]:graph[u])
    {
        if(v==p) continue;
        idx[v]=id;
        dp[v]=dp[u];
        if(idx[v]<idx[u]) dp[v]++;
        dfs(v,u,graph,idx,dp);
    }
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<pair<int,int>>>graph(n+1);
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back({v,i});
        graph[v].push_back({u,i});
    }

    vector<int>idx(n+1,0),dp(n+1,0);

    idx[1]=INT_MAX;
    dfs(1,-1,graph,idx,dp);
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        ans=max(ans,dp[i]);
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