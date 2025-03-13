//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
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

void fun(int i, int j, ll &n, ll &m, vector<pair<int,char>>&v, vector<vector<int>>&dp,vector<bool>&pos)
{
    if(j==m) 
    {
        pos[i+1]=true;
        return;
    }
    if(dp[i][j]!=-1) return;
    dp[i][j]=0;
    if(v[j].second=='0' or v[j].second=='?')
    {
        int next=(i+v[j].first)%n;
        fun(next,j+1,n,m,v,dp,pos);
    }
    if(v[j].second=='1' or v[j].second=='?')
    {
        int next=(i+n-v[j].first)%n;
        fun(next,j+1,n,m,v,dp,pos);
    }
    return ;
}


void solve()
{
    ll n,m,x;
    cin>>n>>m>>x;
    x--;
    vector<vector<int>>dp(n+1,vector<int>(m+2,-1));
    vector<pair<int,char>>v;
    for(int i=0; i<m; i++)
    {
        int r;
        char ch;
        cin>>r>>ch;
        v.push_back({r,ch});
    }
    vector<bool>pos(n+1,false);
    fun(x,0,n,m,v,dp,pos);
    int cnt=0;
    vector<int>ans;
    for(int i=0; i<=n; i++)
    {
        if(pos[i]) 
        {
            cnt++;
            ans.push_back(i);
        }
    }
    cout<<cnt<<'\n';
    printv(ans);
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