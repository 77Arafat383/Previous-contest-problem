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




void solve()
{
    int n;
    cin>>n;

    vector<vector<int>>pos(n+1);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        pos[x].push_back(i);
    }

    vector<int>ans(n+1,-1);
    for(int i=1;i<=n;i++)
    {
        if(pos[i].empty()) continue;
        int mx=0;
        mx=max(mx,pos[i][0]);
        mx=max(mx,n-pos[i].back()+1);
        for(int j=1;j<pos[i].size();j++)
        {
            mx=max(mx,pos[i][j]-pos[i][j-1]);
        }
        while(mx<=n)
        {
            if(ans[mx]!=-1) break;
            ans[mx]=i;
            mx++;
        }
    }
    for(int i=1; i<=n; i++)
    {
        cout<<ans[i]<<' ';
    }
    cout<<nxt;
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