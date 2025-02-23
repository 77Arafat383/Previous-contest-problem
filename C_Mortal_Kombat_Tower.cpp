//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;


ll f(int idx,int turn,vector<int>&v,vector<vector<int>>&dp)
{
    if(idx==v.size()) return 0;
    if(dp[idx][turn]!=-1) return dp[idx][turn];
    ll ans=0;
    if(turn==0)
    {
        ans=f(idx+1,1,v,dp)+v[idx];
        if(idx+1<v.size())
          ans=min(ans,f(idx+2,1,v,dp)+v[idx]+v[idx+1]);
    } 
    else
    {
        ans=f(idx+1,0,v,dp);
        if(idx+1<v.size())
          ans=min(ans,f(idx+2,0,v,dp));
    }
    dp[idx][turn]=ans;
    return ans;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    vector<vector<int>>dp(n+1,vector<int>(2,-1));
    ll ans=f(0,0,v,dp);
    cout<<ans<<'\n';

}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}