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
int bfs(int i,vector<int>&v,vector<vector<int>>&edge)
{
    int mn=INT_MAX;
    for(auto &j:edge[i])
    {
        mn=min(mn,bfs(j,v,edge));
    }
    if(v[i]<mn)
    {
       if(mn==INT_MAX) mn=v[i];
       if(i!=1)
        mn=(v[i]+mn)/2;
      

    }

    return mn;
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n;i++) cin>>v[i];
    vector<vector<int>>edge(n+1);
    for(int i=2; i<=n; i++)
    {
        int p;
        cin>>p;
        edge[p].push_back(i);
    }
    // check;
    // for(int i=1; i<=n; i++)
    // {
    //     cout<<i<<en;
    //     for(auto &j:edge[i]) cout<<j<<' '; cout<<en;
    // }

    int value= bfs(1,v,edge);
    value+=v[1];
    cout<<value<<en;
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