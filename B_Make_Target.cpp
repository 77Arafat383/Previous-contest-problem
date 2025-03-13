//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;




void solve()
{
    ll n;
    cin>>n;
    vector<vector<char>>grid(n+1,vector<char>(n+1));
    for(int i=1; i<=n/2+(n&1); i++)
    {
        int left=i,right=n-i+1;
        int top=i, bottom=n-i+1;
        for(int j=left; j<=right; j++)
        {
            if(i&1)
            {
                grid[top][j]='#';
            }
            else
            {
                grid[top][j]='.';
            }
        }
        for(int j=top; j<=bottom; j++)
        {
            if(i&1)
            {
                grid[j][right]='#';
            }
            else
            {
                grid[j][right]='.';
            }
        }
        for(int j=right; j>=left; j--)
        {
            if(i&1)
            {
                grid[bottom][j]='#';
            }
            else
            {
                grid[bottom][j]='.';
            }
        }
        for(int j=bottom; j>=top; j--)
        {
            if(i&1)
            {
                grid[j][left]='#';
            }
            else
            {
                grid[j][left]='.';
            }
        }

    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1; j<=n; j++) cout<<grid[i][j]; cout<<'\n';
    }
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}