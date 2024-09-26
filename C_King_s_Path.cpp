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

int x0,y0,x1,y1;
map<int,pair<int,int>>graph;
map<pair<int,int>,bool>visited;
map<pair<int,int>,int>mov;
vector<pair<int,int>> movements=
{
    {1,0},{-1,0},
    {0,1},{0,-1},
    {1,1},{-1,-1},
    {1,-1},{-1,1}

};
map<int,int>row;

bool safe(int x, int y)
{
    if(row[x]==0) return 0;
    auto it=graph[x];
    

   if(y>=it.first and y<=it.second and !visited[{x,y}]) return 1;
   return 0;

}
void bfs(int x, int y)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    visited[{x,y}]=true;
    mov[{x,y}]=0;
    while(q.size())
    {
        
        auto dd=q.front();
       q.pop();
        x=dd.first;
        y=dd.second;
      
        if(x==x1 and y==y1)
        {
            break;
        }
        for(auto &[mx,my]:movements)
        {
            int nx=mx+x;
            int ny=my+y;
            if(safe(nx,ny))
            {
                mov[{nx,ny}]=mov[{x,y}]+1;
                visited[{nx,ny}]=1;
                q.push({nx,ny});
            }
        }
    }
    


}

void solve()
{
    cin>>x0>>y0>>x1>>y1;
    int m;
    cin>>m;
    for(int i=1; i<=m; i++)
   {
    int r,a,b;
    cin>>r>>a>>b;
    row[r]=1;
    graph[r]={a,b};
   }
   mov[{x1,y1}]=-1;
   bfs(x0,y0);
   cout<<mov[{x1,y1}]<<endl;
   return;
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}