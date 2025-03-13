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
    ll n;
    cin>>n;
    vector<vector<int>>v(n+1);
    for(int i=1; i<=n;i++)
    {
        int x;
        cin>>x;
        v[x].push_back(i);
    }
    
    for(int i=1; i<=n; i++)
    {
        if(si(v[i])==0) // not found
        {
             cout<<"? "<<i<<' '<<i%n+1<<'\n';
             cout.flush();
             int x;
             cin>>x;
             if(x==0) cout<<"! A\n";
             else cout<<"! B\n";
             cout.flush();
             return;
        }
    }

    int a=v[1][0],b=v[n][0];
    int x,y;
    cout<<"? "<<a<<' '<<b<<'\n';
    cout.flush();
    cin>>x;
    cout<<"? "<<b<<' '<<a<<'\n';
    cout.flush();
    cin>>y;
    if(x>=n-1 and y>=n-1 and x==y) cout<<"! B\n";
    else cout<<"! A\n";
    cout.flush();
    return;
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