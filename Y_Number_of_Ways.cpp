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
const int N=1e3;
int dp[N];
int recursion(int s,int r)
{
    if(dp[r]!=-1) return dp[r];
    int dd=0;
    if(s>r) return 0;
    if(s==r)
    {
        return 1;
    }
    for(int i=1; i<=3; i++)
    {
        dd+=recursion(s,r-i);
    }
    return dp[r]=dd;
    
}

void solve()
{
    memset(dp,-1,N);
    int s,r;
    cin>>s>>r;
    cout<<recursion(s,r)<<endl;
    


}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}