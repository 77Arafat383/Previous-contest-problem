//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
const ll INF =  1e18;
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
ll ans=LLONG_MAX;
int n;

void dfs(ll u,ll an,vector<bool>&vis, vector<vector<pair<ll,ll>>>&graph)
{
    // vis[u]=true;
   // cout<<u<<' ';
   if(u==n)
   {
      if(an<ans) ans=an;
      return;
   }
     for(auto &[v,x]:graph[u])
     {
        if(!vis[v])
        {
            vis[v]=true;
            dfs(v,an^x,vis,graph);
            vis[v]=false;
        }
     }
     return;
}

void solve()
{
    ll m;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>>graph(n+1);
    vector<bool>vis(n+1,false);
    for(int i=1; i<=m; i++)
    {
        ll u,v,x;
        cin>>u>>v>>x;
        graph[u].push_back({v,x});
        graph[v].push_back({u,x});
    }
    vis[1]=true;;
    dfs(1,0,vis,graph);
    cout<<ans<<'\n';


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