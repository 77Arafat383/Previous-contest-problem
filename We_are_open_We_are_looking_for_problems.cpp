//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  367158792;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5+10;

ll dpD(int n, int pos,vector<vector<int>>&dp)
{
    if(n==0)
    {
        return 1;
    }
    if(dp[n][pos]!=-1) return dp[n][pos];
    ll ans=0;
    for(int i=pos; i<26; i++)
    {
        ans=(ans+dpD(n-1,i,dp))%M;
    }
    return dp[n][pos]=ans;
    
}


void solve(vector<vector<int>>&dp)
{
    int n;
    cin>>n;
    cout<<dp[n][0]<<endl;
    ll ans=(dp[n][0]*2)%M;
    ans=(ans-26+M)%M;
   cout<<ans<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
vector<vector<int>>dp(N+1,vector<int>(26,-1));

dpD(N,0,dp);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve(dp);
}
    return 0;
}