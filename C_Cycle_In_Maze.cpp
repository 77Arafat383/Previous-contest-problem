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
char graph[N][N];
int n,m,k;
bool safe(int x, int y)
{
    if(x<1 or y<1 or x>n or y>m or graph[x][y]=='*') return 0;
    return 1;
}
string ans;
bool ok=false;
int sx,sy;
void dfs(int x, int y, string &str, int cnt=0)

{
    
    if(cnt==k and x==sx and y==sy )
    {
        ans=str;
        ok=true;
        return;

    }
    if(ok)
    {
        return;
    }
    
    if(cnt>k) return;
    if(safe(x+1,y))
    {
        str.push_back('D');
        dfs(x+1,y,str,cnt+1);
        str.pop_back();
    }
    if(safe(x,y-1))
    {
        str.push_back('L');
        dfs(x,y-1,str,cnt+1);
        str.pop_back();
    }
    if(safe(x,y+1))
    {
        str.push_back('R');
        dfs(x,y+1,str,cnt+1);
        str.pop_back();
    }
    if(safe(x-1,y))
    {
        str.push_back('U');
        dfs(x-1,y,str,cnt+1);
        str.pop_back();
    }
    return;
    

}

void solve()
{
    cin>>n>>m>>k;
   
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) 
        {
            cin>>graph[i][j];
            if(graph[i][j]=='X')
            {
                graph[i][j]='.';
                sx=i,sy=j;
            }
        }
    }
  string str;
 
    dfs(sx,sy,str);
    if(!ok)
    {
        cout<<"IMPOSSIBLE\n";
        return;
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