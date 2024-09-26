//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=2e5+10;

int lev[N];
bool vis[N];
vector<int>tree[N];


void dfs(int u)
{
    vis[u]=1;
    lev[u]=0;
    for(auto &v:tree[u])
    {
        if(!vis[v])
        {
           lev[v]=lev[u]+1;
            dfs(v);
        }
    }
    return ;

}

void solve()
{
    

    int n;
    cin>>n;
    vector<int>v(n);
    int value=INT_MAX;
    int root=-1;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i-1];
        if(value>v[i-1])
        {
            value=v[i-1];
            root=i;
        }
    }
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    vector<int>ans;
    dfs(root);
  
    
   map<int,vector<int>>level;
   for(int i=1; i<=n; i++)
   {
      level[lev[i]].push_back(i);
   }
   for(auto &it:level)
   {
       for(auto &child:it.second) ans.push_back(child);
     
     
   }
   rev(ans);
   ans.pop_back();
   cout<<ans.size()<<endl;
   printv(ans);
   for(int i=1; i<=n; i++) tree[i].clear();
 
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}