//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5+2;




void solve()
{
    int n;
    cin>>n;
    vector<ll>v(N+2,0);
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        v[x]++;
    }

    for(int i=1; i<=N; i++)
    {
        v[i]*=i;
    }

    vector<ll>dp(N+2,0);
    for(int i=1; i<=N; i++)
    {
        dp[i]=dp[i-1];
        if(i-2>=0) dp[i]=max(dp[i],dp[i-2]+v[i]);
        if(i==1) dp[i]=max(dp[i],v[i]);
    }
//     for(int i=0; i<=10; i++) cout<<dp[i]<<' ';
//    cout<<en;
    cout<<dp[N]<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}