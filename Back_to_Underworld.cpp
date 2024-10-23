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
const int N=1e5+10;

void bfs(vector<int>&level,int n, vector<vector<int>>&graph)
{
    queue<int>s;
    s.push(1);
    vector<bool>vis(n+2,0);
    level[1]=1;
    while(!s.empty())
    {
        int u=s.front();
        s.pop();
        vis[u]=true;
        for(auto &v:graph[u])
        {
            if(vis[v]) continue;
            s.push(v);
            level[v]=level[u]+1;
        }
    }


}


void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>graph(3*n);
    int mx=0;
    for(int i=0; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        mx=max(mx,max(u,v));
        graph[u].push_back(v);
        graph[v].push_back(u);
    }
    
    vector<int>level(mx+2,0);
    bfs(level,mx,graph);
   // printv(level);
    int cnt1=0,cnt2=0;
    for(int i=1; i<=mx; i++)
    {
        if(level[i]&1 and level[i]>0) cnt1++;
        else if(level[i]>0) cnt2++;
    }
   // cout<<cnt1<<" "<<cnt2<<endl;
    int ans=max(cnt1,cnt2);
    cout<<ans<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
  
   cout<<"Case "<<i<<": ";
    solve();
}
    return 0;
}