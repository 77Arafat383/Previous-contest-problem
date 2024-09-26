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

const int N=1e3+10;
int n,m;
char graph[N][N];
map<pair<int, int>,pair<int,int>>par;
vector<pair<int,int>> movements=
{
    {1,0},{0,1},{-1,0},{0,-1}
};

bool safe(int x, int y)
{
    if(x<1 or y<1 or x>n or y>m) return 0;
    return 1;

}

void bfs(int x,int y, int dx, int dy)
{
    queue<pair<int,int>>q;
    q.push({x,y});
    graph[x][y]='X';
   
    while(q.size())
    {
        auto [ux,uy]=q.front();
        if(ux==dx and uy==dy)
        {
            break;
        }
        q.pop();
        for(auto &[xx,yy]:movements)
        {
            int nx=xx+ux;
            int ny=yy+uy;
            if(safe(nx,ny))
            {
                if(graph[nx][ny]=='.')
                {
                    graph[nx][ny]='X';
                    par[{nx,ny}]={ux,uy};
                    //cout<<par[{nx,ny}].first<<" "<<par[{nx,ny}].second<<endl;
                    q.push({nx,ny});
                }
            }
        }
        
    }

}



void solve()
{
    
    cin>>n>>m;
    int x0,y0,x1,y1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
             cin>>graph[i][j];
             if(graph[i][j]=='A') 
             {
                x0=i;
                y0=j;
                graph[i][j]='.';
             }
             if(graph[i][j]=='B')
             {
                x1=i;
                y1=j;
                graph[i][j]='.';
             }
        }
    }
     par[{x0,y0}]={-1,-1};
     par[{x1,y1}]={-1,-1};
    bfs(x0,y0,x1,y1);
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=m;j++)
    //     {
    //         cout<<graph[i][j];
    //     }
    //     cout<<endl;
    // }

    auto dd=par[{x1,y1}];
   // cout<<dd.first<<" "<<dd.second<<endl;
    if(dd.first!=-1 and dd.second!=-1)
    {
        cout<<"YES\n";
        pair<int,int>child={x1,y1};
        vector<char>path;
        while(child.first!=-1 and child.second!=-1)
        {
            auto [cx,cy]=par[child];
            auto [px,py]=child;
           // cout<<child.first<<" "<<child.second<<endl;
            if(px==cx)
            {
                int d=py-cy;
                if(d>0)
                {
                    path.push_back('R');
                }
                else
                {
                    path.push_back('L');
                }
            }
            else
            {
                int d=px-cx;
                if(d>0)
                {
                    path.push_back('D');
                }
                else
                {
                    path.push_back('U');
                }
            }


            child=par[child];
        }
        path.pop_back();
        rev(path);
        cout<<path.size()<<endl;
       for(int i=0; i<path.size(); i++) cout<<path[i];
       cout<<endl;
        return;
    }
    cout<<"NO\n";



    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}