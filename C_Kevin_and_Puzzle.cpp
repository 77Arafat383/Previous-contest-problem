//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  998244353;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vector<ll>v(n),dp(n,0);
    for(auto &it:v) cin>>it;
    if(n==1) 
    {
        if(v[0]==0) cout<<2<<en;
        else cout<<1<<en;
        return;
    }

    if(v[0]==0) dp[0]=1;
    else dp[0]=0;
    if(v[1]==0) dp[1]+=dp[0];
    else if(v[1]==1) dp[1]=1;

    for(int i=2; i<n; i++)
    {
        if(v[i]==v[i-1]) dp[i]=(dp[i]+dp[i-1])%M;
        if(v[i]==v[i-2]+1) dp[i]=(dp[i]+dp[i-2])%M;
    }
    cout<<(dp[n-1]+dp[n-2])%M<<en;
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