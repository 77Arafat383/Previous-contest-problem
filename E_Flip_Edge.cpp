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




void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<vector<ll>>g(n+1),rg(n+1);
    for(int i=1;i<=m; i++)
    {
        ll u,v;
        cin>>u>>v;
        g[u].push_back(v);
        rg[v].push_back(u);
    }
    set<tuple<ll,int,int>>s;
    vector<vector<ll>>dp(n+1,vector<ll>(2,INF));
    s.insert({0LL,1,0});
    dp[1][0]=0;
    while(!s.empty())
    {
        auto [c,u,flag]=*s.begin();
        s.erase(s.begin());
        if(c>dp[u][flag]) continue;
        if(u==n)
        {
            cout<<c;
            return;
        }
        auto &graph=(flag==0)? g: rg;
        for(auto &v:graph[u])
        {
            if(dp[v][flag]>c+1)
            {
                dp[v][flag]=c+1;
                s.insert({c+1,v,flag});
            }
            
        }
        if(dp[u][!flag]>c+k)
        {
            dp[u][!flag]=c+k;
            s.insert({c+k,u,!flag});
        }
    }
    cout<<-1;
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