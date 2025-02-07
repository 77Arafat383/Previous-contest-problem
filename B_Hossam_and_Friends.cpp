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
    int n,m;
    cin>>n>>m;
    vector<vector<int>>graph(n+1);
    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        u--,v--;
        if(u>v) swap(u,v);
        graph[v].push_back(u);
    }
    for(int i=0; i<n; i++)
    {
        sort(all(graph[i]));
    }

    ll ans=0;
    int r=0;
    for(int l=0; l<n; l++)
    {
        while(r+1<n)
        {
            if(graph[r+1].size()==0 or graph[r+1].back()<l)
            {
                r++;
            }
            else
            {
                break;
            }
        }
        ans+=r-l+1;
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