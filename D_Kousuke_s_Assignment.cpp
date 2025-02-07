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
const int N=1e5;

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1);  for(int i=1; i<=n; i++) cin>>v[i];

    map<ll,int>mp;
    vector<ll>dp(n+1,0);
    mp[0]=0;
    ll sum=0;
    for(int i=1; i<=n; i++)
    {
        sum+=v[i];
        dp[i]=dp[i-1];
        if(mp.count(sum)) // count funtion 0 count kore but mp[sum] e zero thakle ase na.. 
        {
            int j=mp[sum];
            dp[i]=max(dp[i],dp[j]+1);

        }
        mp[sum]=i;
    }
    cout<<dp[n]<<en;
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