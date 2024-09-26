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

const int N=1e3+100;
char graph[N][N];
bool safe(int x, int y, int n, int m)
{
    if(x< 1 or x>n or y<1 or y>m)
    {
        return false;

    }
    if(graph[x][y]=='#') return false;
    return true;
}

vector<pair<int,int>> road={
    {1,0},{-1,0},{0,1},{0,-1}
};
void dfs(int x, int y, int n, int m)
{
    graph[x][y]='#';
    for(auto &it:road)
    {
        if(safe(x+it.first, y+it.second, n, m))
        dfs(x+it.first, y+it.second, n, m);
    }
    
    

}
void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) 
        {
            cin>>graph[i][j];
        }
    }
    int ans=0;

     for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) 
        {
            if(graph[i][j]=='.')
            {
                ans++;
                dfs(i,j,n,m);
            }
        }
    }
    cout<<ans<<endl;

}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}