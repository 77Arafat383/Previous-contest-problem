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

void dfs(int u,int p,vector<vector<int>>&tree, vector<int>&ans)
{
   // cout<<u<<en;
    ans[u]=0;
    for(auto &v:tree[u])
    {
         if(v==p) continue;
         dfs(v,u,tree,ans);
         ans[u]|=(ans[v]^1);
    }
    return;
}


void solve()
{
    int n,t;
    cin>>n>>t;
    vector<vector<int>>tree(n+2);
    vector<int>ans(n+1,0);
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<i<<en;
    //     printv(tree[i]);
    // }
    int root;
    cin>>root;
    dfs(root,-1,tree,ans);
    if(ans[root]&1)
    {
        cout<<"Ron\n";
        return;
    }
    cout<<"Hermione\n";
    return;
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