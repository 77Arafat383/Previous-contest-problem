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


ll f(int i, int j, vector<vector<ll>>&grid,vector<vector<ll>>&dp)
{
    if(j==0)
    {
         return 0;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    dp[i][j]= f(i,j-1,grid,dp);
    dp[i][j]=max(dp[i][j],f((i+1)%2,j-1,grid,dp)+grid[i][j]);
    return dp[i][j];
}

void solve()
{
    int n;
    cin>>n;
    vector<vector<ll>>grid(3,vector<ll>(n+3));
    vector<vector<ll>>dp(3,vector<ll>(n+3,-1));
    for(int i=0; i<2; i++)
    {
        for(int j=1; j<=n; j++) cin>>grid[i][j];
    }
    ll ans=f(0,n+1,grid,dp);
    cout<<ans<<en;

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