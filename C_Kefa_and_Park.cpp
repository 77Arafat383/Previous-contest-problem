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
int m;
vector<int>a(N+1),vis(N,0),graph[N],ans(N,0);
void dfs(int u,int cnt=0)
{
    vis[u]=1;
    if(a[u]) cnt++;
    else
    {
        cnt=0;
    }
    if(graph[u].size()==1 and cnt<=m and u!=1)
    {
        ans[u]=1;
        //cout<<u<<endl;
        return;

    }
    
  
    for(auto &v:graph[u])
    {
        if(cnt>m or vis[v] ) continue;
        
        else
        {
            dfs(v,cnt);
            ans[u]+=ans[v];
        }
    }

}




void solve()
{
    int n;
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    dfs(1);
    cout<<ans[1]<<endl;
    return;

}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}