//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;

void f(int i, int j, vector<string>&grid,int &n, int &m)
{
    grid[i][j]='X';
    if(i-1>=0 and grid[i-1][j]=='D')
    {
        f(i-1,j,grid,n,m);
    }
    if(i+1<n and grid[i+1][j]=='U')
    {
        f(i+1,j,grid,n,m);
    }
    if(j-1>=0 and grid[i][j-1]=='R')
    {
        f(i,j-1,grid,n,m);
    }
    if(j+1<m and grid[i][j+1]=='L')
    {
        f(i,j+1,grid,n,m);
    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    vector<string>grid(n);
    for(int i=0; i<n; i++) cin>>grid[i];
    
    for(int j=0; j<m; j++)
    {
        if(grid[0][j]=='U')
        {
            f(0,j,grid,n,m);
        }
        if(grid[n-1][j]=='D')
        {
            f(n-1,j,grid,n,m);
        }
    }
    for(int i=0; i<n; i++)
    {
        if(grid[i][0]=='L')
        {
            f(i,0,grid,n,m);
        }
        if(grid[i][m-1]=='R')
        {
            f(i,m-1,grid,n,m);
        }
    }
    for(int i=0;i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='?')
            {
                bool ok=false;
                if(i-1>=0 and grid[i-1][j]!='X') ok=true;
                if(i+1<n and grid[i+1][j]!='X') ok=true;
                if(j-1>=0 and grid[i][j-1]!='X') ok=true;
                if(j+1<m and grid[i][j+1]!='X') ok=true;
                if(!ok)
                {
                    grid[i][j]='X';
                }
            }
        }
    }

    int ans=0;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]!='X') ans++;
        }
    }
    cout<<ans<<en;
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}