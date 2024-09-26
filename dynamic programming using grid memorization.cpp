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

const int N=1e4+10;
int dp[N][N];
int dynamic(int n, int m)
{
    if(n*m==1)
    {
        dp[n][m]=1;
        return 1;
    }
    if(n*m==0)
    {
        dp[n][m]=0;
        return 0;
    }
    if(dp[n][m]!=-1 or dp[m][n]!=-1) return (dp[n][m]!=-1)? dp[n][m]: dp[m][n];
    
    dp[n][m]=dp[m][n]=(dynamic(n-1,m)+dynamic(n,m-1))%M;
    return dp[n][m];
}

void solve()
{
    memset(dp,-1,N*N);
    int n,m;
    cin>>n>>m;
    cout<<dynamic(n,m)<<endl;
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}