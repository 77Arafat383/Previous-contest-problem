//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
const ll INF =  1e18;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;


ll f(int i,int cnt,ll sum,vector<vector<int>>&dp,vector<ll>&v)
{
    
    if(cnt==0)
    {
        if(sum%5==0)
        {
            cout<<sum<<' ';
            return 1;
        }
        return 0;
    }
    if(i<0) return 0;
    
    if(dp[i][cnt]!=-1) return dp[i][cnt];
     dp[i][cnt]=f(i-1,cnt,sum,dp,v)+f(i-1,cnt-1,sum+v[i],dp,v);
    return dp[i][cnt];
    
}

void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    vector<vector<int>>dp(n+1,vector<int>(6,-1));
    ll ans=f(n-1,5,0,dp,v);
    cout<<ans;
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