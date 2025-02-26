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
ll binex(ll a, ll b)
{
    ll res=1;
    while(b>0)
    {
        if(b&1) res=(res*a)%M;
        a=(a*a)%M;
        b/=2;
    }
    return res;
}
int root(int a, vector<int>&par)
{
    return par[a]==a ? a : par[a]=root(par[a],par);
}

void unite(int a, int b, vector<int>&par, vector<int>&sz)
{
    a=root(a,par), b=root(b,par);
    if(a==b) return;
    if(sz[a]<sz[b]) swap(a,b);
    sz[a]+=sz[b];
    par[b]=a;
}

void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>par(n+1),sz(n+1,1);
    for(int i=1; i<=n; i++) par[i]=i;
    for(int i=0; i<n-1; i++)
    {
        int u,v,x;
        cin>>u>>v>>x;
        if(x==0) unite(u,v,par,sz);
    }
    vector<bool>vis(n+1,false);
    ll ans=binex(n,k);
    for(int i=1; i<=n;i++)
    {
        int rt=root(i,par);
        if(vis[rt]) continue;
        ans=(ans-binex(sz[rt],k)+M)%M;
        vis[rt]=true;

    }
    cout<<ans<<nxt;
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