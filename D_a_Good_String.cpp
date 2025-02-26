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
#define si(x) int(x.size())
const int N=1e5;


ll fun(int st, int en, int cr, vector<vector<int>>&dp)
{
    if(st>en) return 0;
    if(st==en) return ((dp[en][cr]-dp[st-1][cr])==0);
    ll mid=(st+en)/2;
    ll len=en-st+1;
    len/=2;
    ll ans1=len-(dp[mid][cr]-dp[st-1][cr])+fun(mid+1,en,cr+1,dp);
    ll ans2=len-(dp[en][cr]-dp[mid][cr])+fun(st,mid,cr+1,dp);
    return min(ans1,ans2);
}

void solve()
{
    int n;
    cin>>n;
    string str;
    
    cin>>str;
    str='a'+str;
    vector<vector<int>>dp(n+1,vector<int>(26,0));
    for(int i=1; i<=n; i++)
    {
        dp[i][str[i]-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dp[j][i]+=dp[j-1][i];
        }
    }
    ll  ans=fun(1,n,0,dp);
    cout<<ans<<nxt;
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