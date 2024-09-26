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
const int N=9;
int mov[N][N];
bool vis[N][N];
int x_axies(string str)
{
    return str[0]-'a';
}
int y_axies(string str)
{
    return str[1]-'0';
}

vector<pair<int,int>>movements={
    {-2,1},{-2,-1},
    {1,-2},{-1,-2},
    {2,1},{2,-1},
    {1,2},{-1,2}
};

bool safe(int x, int y)
{
    if(x<1 or x>8 or y<1 or y>8) return 0;
    return 1; 
}

void bfs(int x0,int y0,int x1,int y1)
{
    queue<pair<int,int>>q;
    q.push({x0,y0});
    mov[x0][y0]=0;
    vis[x0][y0]=1;
    while(q.size())
    {
        auto [x,y]=q.front();
        q.pop();
        for(auto &[mx,my]:movements)
        {
            int nx=mx+x;
            int ny=my+y;
            if(x==x1 and y==y1)
            {
                break;

            }
            if(safe(nx,ny) and !vis[nx][ny])
            {
                vis[nx][ny]=1;
                mov[nx][ny]=mov[x][y]+1;
                q.push({nx,ny});
            }
        }

        if(mov[x][y]==M) break;

    }


}

void reset()
{
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            mov[i][j]=0;
            vis[i][j]=false;
        }
    }

}

void solve()
{
    reset();
    string st,en;
    cin>>st>>en;
    int x0,y0,x1,y1;
    x0=x_axies(st);
    x1=x_axies(en);
    y0=y_axies(st);
    y1=y_axies(en);
    bfs(x0,y0,x1,y1);
    cout<<mov[x1][y1]<<endl;


}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}