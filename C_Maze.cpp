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

int k;
const int N=1e3;
char graph[N][N];
bool vis[N][N];
int n,m;
bool safe(int x, int y)
{
    if(x<1 or x>n or y<1 or y>m or vis[x][y] or graph[x][y]=='#') return 0;
    return 1;
}
vector<pair<int,int>> movements ={
    {1,0},{-1,0},{0,1},{0,-1}
};
void dfs(int x, int y)
{
    vis[x][y]=true;
    for(auto &[xx,yy]:movements)
    {
        int nx=x+xx;
        int ny=y+yy;
        if(safe(nx,ny))
        {
            dfs(nx,ny);
        if(k>0)
        {
            graph[nx][ny]='X';
            k--;
        }

        } 

    }
}

void solve()
{
    
    cin>>n>>m>>k;
    int x,y;
    bool first_time=true;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) 
        {
            cin>>graph[i][j];
            if(graph[i][j]=='.' and first_time)
            {
                x=i;
                y=j;
                first_time=false;
            }
        }
    }
    dfs(x,y);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) cout<<graph[i][j]; cout<<endl;
    }
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}