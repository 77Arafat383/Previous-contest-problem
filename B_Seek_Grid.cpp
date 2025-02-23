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
    vector<string>g(n),t(m);
    for(auto &it:g) cin>>it;
    for(auto &it:t) cin>>it;
//    printv(g);
//    printv(t);
    for(int i=0; i<n-m+1; i++)
    {
        for(int j=0; j<n-m+1; j++)
        {
            bool ok=true;
            for(int p=0; p<m; p++)
            {
                for(int q=0; q<m; q++)
                {
                    if(i+p==n or j+q==n)
                    {
                        ok=false;
                        break;
                    }
                     if(g[i+p][j+q]!=t[p][q])
                     {
                        ok=false;
                        break;
                     }
                }
                if(!ok) break;
            }
            if(ok)
            {
                cout<<i+1<<' '<<j+1<<nxt;
                return;
            }
        }
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