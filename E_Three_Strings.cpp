//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+400;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;
int f(int i, int j,int k, string &a, string &b, string &c,vector<vector<int>>&dp)
{
    if(i==a.size())
    {
        int cnt=0;
       
        for(; j<b.size(); j++,k++)
        {
            if(c[k]!=b[j]) cnt++;
        }
        return cnt;
    }

    if(j==b.size())
    {
        int cnt=0;
      
        for(; i<a.size(); i++,k++)
        {
            if(c[k]!=a[i]) cnt++;
        }
        return cnt;
    }
    if(dp[i][j]!=-1) return dp[i][j];
    int ans=M;
    
    if(a[i]==c[k]) 
    {
        ans=min(ans,f(i+1,j,k+1,a,b,c,dp));
    }
    else
    {
        ans=min(ans,f(i+1,j,k+1,a,b,c,dp)+1);
    }
    if(b[j]==c[k]) 
    {
        ans=min(ans,f(i,j+1,k+1,a,b,c,dp));
    }
    else
    {
        ans=min(ans,f(i,j+1,k+1,a,b,c,dp)+1);
    }

    return dp[i][j]=ans;
    
}
void solve()
{
    string a,b,c;
    cin>>a>>b>>c;
    int n=a.size();
    int m=b.size();
    vector<vector<int>>dp(n+2,vector<int>(m+2,-1));
    int ans=f(0,0,0,a,b,c,dp);
    cout<<ans<<en;

    
}
signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}