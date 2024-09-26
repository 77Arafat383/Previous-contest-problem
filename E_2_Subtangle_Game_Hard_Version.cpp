//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;


int f(vector<int>&arr,vector<vector<int>>&grid,int i, int j, int k, int l, int n, int m,vector<vector<vector<int>>>&dp)
{
    if(k>=l or i>=n or j>=m)
    {
        return dp[i][j][k]=0; 
    }
    if(dp[i][j][k]!=-1) return dp[i][j][k];
    int payce=0;
    if(grid[i][j]==arr[k])
    {
        payce=f(arr,grid,i+1,j+1,k+1,l,n,m,dp);
        if(payce==0) //paynai mane T win. 
        {
          return  dp[i][j][k]=1;
        }
    }

    int test=0;
    test=f(arr,grid,i+1,j,k,l,n,m,dp);
    test=max(test,f(arr,grid,i,j+1,k,l,n,m,dp));
    if(test==1) return dp[i][j][k]=1;
    return dp[i][j][k]=0;

}


void solve()
{
    int l,n,m;
    cin>>l>>n>>m;
    vector<int>a(l);
    for(auto &it:a) cin>>it;
    vector<vector<int>>grid(n,vector<int>(m));
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++) cin>>grid[i][j];
    }

    vector<vector<vector<int>>> dp(n+1,vector<vector<int>>(m+1,vector<int>(l+1,-1)));
    int ans=f(a,grid,0,0,0,l,n,m,dp);
    if(ans)
    {
        cout<<"T\n";
        return;
    }
    cout<<"N\n";
    return;

    
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}