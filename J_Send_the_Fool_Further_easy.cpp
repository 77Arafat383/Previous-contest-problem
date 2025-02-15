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


ll dfs(int u, int p, vector<vector<pair<int,ll>>>&tree)
{
    
    ll ans=0;
    for(auto &[v,cost]:tree[u])
    {
        if(v==p) continue;
        ans=max(ans,dfs(v,u,tree)+cost);
    }
   // cout<<u<<' '<<ans<<en;
    return ans;
}


void solve()
{
    int n;
    cin>>n;
    vector<vector<pair<int,ll>>>tree(n+1);
    for(int i=1; i<n; i++)
    {
        ll u,v,cost;
        cin>>u>>v>>cost;
        tree[u].push_back({v,cost});
        tree[v].push_back({u,cost});
    }

    ll ans=dfs(0,-1,tree);
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