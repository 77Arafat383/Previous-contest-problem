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

ll dfs(int u,vector<bool>&vis, vector<vector<int>>&tree)
{
    vis[u]=true;
    ll ans=0;
    if(tree[u].size()==4 or tree[u].size()==1)
    {
        for(auto &v:tree[u])
        {
            if(vis[v])continue;
            ans+= dfs(v,vis,tree)+1;
        }
    }
    return ans;
}


void solve()
{
    ll n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<int>four;
    for(int i=1; i<=n; i++)
    {
        if(tree[i].size()==4)
        {
            four.push_back(i);
        }
    }
    vector<bool>vis(n+1,false);
    ll m=four.size();
    if(m==0)
    {
        cout<<"-1";
        return;
    }
    ll ans=0;
    for(int i=0; i<m; i++ )
    {
        if(!vis[four[i]])
           ans+= dfs(four[i],vis,tree)+1;
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