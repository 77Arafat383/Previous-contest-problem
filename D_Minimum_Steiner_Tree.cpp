//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=2e5+10;
vector<int>graph[N],stock(N,0);
vector<bool>vis(N,false);


void dfs(int u)
{
    vis[u]=1;
    for(auto &vv:graph[u])
    {
        if(vis[vv]==0)
        {
            dfs(vv);
            stock[u]+=stock[vv];
            
        }
    }
}

void solve()
{
    int n,k;
    cin>>n>>k;
   
    vector<int>v(k);
   
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);

    }
    for(auto &it:v)
    {
        cin>>it;
        stock[it]=1;
    }
    
    //dfs....
    dfs(v[0]);
    int ans=0;
    for(auto &it:stock) if(it>0) ans++;
    cout<<ans<<endl;
    
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}