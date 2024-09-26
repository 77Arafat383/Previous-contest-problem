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
vector<int>graph[N];
vector<bool>vis(N,0);
vector<int>par(N);

void bfs(int u, int n)
{
    vis[u]=true;
    queue<int>q;
    q.push(u);
    par[u]=-1;
    while(q.size()>0)
    { 

        
         
        int u=q.front();
        
        

        if(u==n)
        {
            break;
        }
        q.pop();
        for(auto &v:graph[u])
        {
            if(!vis[v])
            {
                par[v]=u;
               vis[v]=true;
                q.push(v);
            }

        }
    }

}

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    par[n]=-1;
    par[1]=-1;
    bfs(1,n);
 
    if(par[n]==-1)
    {
        cout<<"IMPOSSIBLE\n";
        return;
    }
    
    vector<int>path;
    
    for(int v=n; v!=-1; v=par[v])
    {
        path.push_back(v);
    }
    rev(path);
    cout<<path.size()<<endl;
    printv(path);
    

}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}