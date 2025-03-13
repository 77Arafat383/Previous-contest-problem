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

double dfs(int u, int par, vector<vector<int>>&tree)
{
    double ans=0;
    double cnt=0;
    for(auto &v:tree[u])
    {
        if(v==par) continue;
        ans+=dfs(v,u,tree);
        cnt+=1;
    }
    
    if(cnt!=0)
        ans/=cnt;
    return ans+1;
}


void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>tree(n+1);
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }
    double ans=dfs(1,-1,tree)-1;
    cout<<fixed<<setprecision(15)<<ans;
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