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
const ll bM =  998244353;
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




void solve()
{
    ll n,m;
    cin>>n>>m;
    vector<vector<int>>grid(n,vector<int>(m));
    vector<int>freq(n*m+1);
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            int x;
            cin>>x;
            freq[x]=1;
            grid[i][j]=x;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m-1; j++)
        {
            if(grid[i][j]==grid[i][j+1])
            {
                freq[grid[i][j]]=2;
            }
        }
    }
    for(int i=0; i<m; i++)
    {
        for(int j=0; j<n-1; j++)
        {
            if(grid[j][i]==grid[j+1][i])
            {
                freq[grid[j][i]]=2;
            }
        }
    }

    ll total=0;
    for(int i=0; i<=n*m; i++)
    {
        total+=freq[i];
    }
    ll ans=INT_MAX;
    for(int i=0; i<=n*m; i++)
    {
        ans=min(ans,total-freq[i]);
    }
    cout<<ans<<'\n';
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