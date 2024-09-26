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


int f(int i,int sum,vector<int>&v,vector<vector<int>>&dp)
{
    if(sum==0) return 0;
    if(i==0)
    {
        if(sum%v[i]==0) return 1;
        else return 0;
    }
    if(dp[i][sum]!=-1) return dp[i][sum];
    int not_picked= 0+f(i-1,sum,v,dp);
    int picked=0;
    if(v[i]<=sum) picked=(1+f(i,sum-v[i],v,dp))%M;
    return dp[i][sum] =(not_picked+picked)%M;

}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(6);
    vector<vector<int>>dp(6,vector<int>(n+1,-1));
    for(int i=0; i<6; i++) v[i]=i+1;
    int ans=f(5,n,v,dp);
    cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}