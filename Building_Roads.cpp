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
vector<bool>vis(N,0);
vector<int>graph[N];
void dfs(int u)
{
    vis[u]=1;
    for(auto &v:graph[u])
    {
        if(!vis[v]) dfs(v);
    }

}

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int a,b;
        cin>>a>>b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    vector<int>store;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            store.push_back(i);
            dfs(i);
        }
    }
    //printv(store);
    cout<<store.size()-1<<endl;
    for(int i=1; i<store.size(); i++)
    {
        cout<<store[i-1]<<" "<<store[i]<<endl;
    }    
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}