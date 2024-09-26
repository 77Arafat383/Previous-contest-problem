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

bool ok=false;
int n,m;
const int N=1e3;
char graph[N][N];
bool safe(int x, int y)
{
    if(x<1 or x>n or y<1 or y>m or graph[x][y]=='X') return 0;
    return 1;
}
vector<pair<int,int>> movements ={
    {1,0},{-1,0},{0,1},{0,-1}
};
bool dfs(int x,int y,int dx,int dy)
{
    
  
    
    if(x==dx and y==dy and graph[x][y]=='X' and ok)
    {
        return 1;
    }
    if(graph[x][y]!='X') ok=true;
     graph[x][y]='X';
    bool ans=false;
    for(auto &it:movements)
    {
       int nx=x+it.first;
       int ny=y+it.second;
        if(safe(nx,ny) or (nx==dx and ny==dy))
        {
            

           ans+=dfs(nx,ny,dx,dy);
        }
    }
    return ans;

}


void solve()
{
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) cin>>graph[i][j];
    }

    int sx,sy,ex,ey;
    if(n==1 and m==1)
    {
        cout<<"NO\n";
        return;
    }
    cin>>sx>>sy>>ex>>ey;
    if(sx!=ex or sy!=ey) ok=true;
    if(dfs(sx,sy,ex,ey))
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}