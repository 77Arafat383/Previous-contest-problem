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




void solve()
{
    int n;
    cin>>n;
    vector<vector<int>>edge(n+1);
    vector<int>ans(n+1,-1);
    for(int i=0; i<n-1; i++)
    {
        int u,v;
        cin>>u>>v;
        edge[u].push_back(i);
        edge[v].push_back(i);
    }

    pair<int,int>mx={0,0};
    for(int i=0; i<=n; i++)
    {
        mx=max(mx,{edge[i].size(),i});
    }
    int mex=0;
    for(auto &i:edge[mx.second])
    {
        ans[i]=mex++;
    }
   // for(int i=0; i<=n; i++) cout<<edge[i].size()<<' '; cout<<'\n';
   // mex--;
    for(int i=0; i<n-1; i++)
    {
        if(ans[i]==-1)
        {
            ans[i]=mex++;
        }
        cout<<ans[i]<<'\n';
    }
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