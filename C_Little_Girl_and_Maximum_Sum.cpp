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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n),pos(n+2,0);
    for(auto &it:v) cin>>it;
    sort(v.rbegin(),v.rend());
    w(q)
    {
        ll l,r;
        cin>>l>>r;
        pos[l]++;
        pos[r+1]--;
    }
    for(int i=1; i<=n; i++)
    {
        pos[i]+=pos[i-1];
    }
    ll ans=0;
    sort(pos.rbegin(),pos.rend());
    for(int i=0; i<n; i++)
    {
        ans+=pos[i]*v[i];
    }
    cout<<ans<<nxt;
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