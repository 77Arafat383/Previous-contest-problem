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


ll f(int idx, int pick,int &k,vector<vector<ll>>&dp)
{
    if(idx==0)
    {
       return k-1;
    }
    if(dp[idx][pick]!=-1) return dp[idx][pick];
    
    dp[idx][pick]=(k-1)*f(idx-1,0,k,dp);
    if(!pick)
    {
        dp[idx][pick]+=f(idx-1,1,k,dp);
    }
    return dp[idx][pick];

}

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<vector<ll>>dp(n+1,vector<ll>(3,-1));
    


}


signed main()
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