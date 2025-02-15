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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n),vis(k+1,0);
    for(auto &it:v) cin>>it;
    for(int i=0; i<n; i++)
    {
        v[i]%=k;
        vis[v[i]]++;
    }
    ll ans=0;
    //printv(vis);
    for(int i=0; i<=k/2; i++)
    {
        if(vis[i]>0 or vis[(k-i)%k]>0)
        {
          //  cout<<i<<en;
            ans++;
            ll dd=max(vis[i],vis[(k-i)%k])-min(vis[i],vis[(k-i)%k])-1;
            if(dd<0) dd=0;
            ans+=dd;
        }
      //  cout<<i<<' ';
    }
    //check;
    cout<<ans<<en;
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