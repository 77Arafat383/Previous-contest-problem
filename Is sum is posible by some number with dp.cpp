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

const int N=1e5+10;
int dp[N];

int dynamic( int sum, vector<int>&v)
{
   
    if(sum<0) return dp[sum]=0;
    if(sum==0) return dp[sum]=1;
     if(dp[sum]!=-1) return dp[sum];
   
  //  cout<<sum<<endl;
  int dd=0;
    for(auto it:v)
    {
        
       dd+=dynamic(sum-it,v);
       
    }
   
    return dp[sum]=dd;


}

void solve()
{
   memset(dp,-1,N);
    int n;
    cin>>n;
    vector<int>digit(n);
    for(auto &it:digit) cin>>it;
    int sum;
    cin>>sum;
    cout<<dynamic(sum,digit)<<endl;
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}