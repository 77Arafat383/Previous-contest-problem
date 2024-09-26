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
vector<int>ans(N,0);
vector<int>graph[N];
bool ok=true;
void dfs(int u,int value,int per)
{
    if(ans[u]!=0 and ans[u]!=value)
    {
        ok=false;
        return;

    }
    if(ans[u]==value)
    {
        return;
    }
    ans[u]=value;
    if(value==1) value=2;
    else value=1;
    for(auto &v:graph[u])
    {
        if(v!=per)
        dfs(v,value,u);
    }
    return;
}
void reset(int n)
{
    for(int i=1; i<=n; i++)
    {
        ans[i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        graph[i].clear();
    }
}
void solve()
{
   
    ok=true;
    int n,m;
    cin>>n>>m;
    reset(n);
    for(int i=1; i<=m; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    // for(int i=1; i<=n; i++)
    // {
    //     printv(graph[i]);
    // }
    for(int i=1; i<=n; i++)
    {
        if(ans[i]!=0) continue;
        dfs(i, 1, i);
    }
    if(!ok)
    {
        cout<<"Suspicious bugs found!\n";

        
        return;
    }
    cout<<"No suspicious bugs found!\n";
    return;
    
}


int main()
{
int t;
cin>>t;
for(int i=1; i<=t; i++)
{
    cout<<"Scenario #"<<i<<":\n";
    solve();
}
    return 0;
}