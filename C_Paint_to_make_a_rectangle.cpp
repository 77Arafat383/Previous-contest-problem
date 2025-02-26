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
    int n,m;
    cin>>n>>m;
    vector<string>grid(n);
    for(auto &it:grid) cin>>it;
    int ra=-1,rb=-1,ca=-1,cb=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(grid[i][j]=='#')
            {
                if(ra==-1) ra=i;
                rb=i;
            }
        }
    }

    for(int j=0; j<m; j++)
    {
        for(int i=0; i<n; i++)
        {
            if(grid[i][j]=='#')
            {
                if(ca==-1) ca=j;
                cb=j;
            }
        }

    }

    for(int i=ra; i<=rb; i++)
    {
        for(int j=ca; j<=cb; j++)
        {
            if(grid[i][j]=='.')
            {
                cout<<"No\n";
                return;
            }
        }
    }

    cout<<"Yes\n";
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