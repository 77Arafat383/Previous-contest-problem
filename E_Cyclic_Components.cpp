//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;

int dfs(int u,vector<bool>&vis,vector<vector<ll>>&graph)
{
    vis[u]=true;
    int ans=1;
    for(auto &v:graph[u])
    {
        if(!vis[v]) ans&=dfs(v,vis,graph);
    }
    if(graph[u].size()!=2) ans=0;
    return ans;
}


void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>>graph(n+1);
    for(int i=0; i<m; i++)
    {
        ll u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool>vis(n+1);
    ll ans=0;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            if(dfs(i,vis,graph)) ans++;
        }
    }
    cout<<ans;
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