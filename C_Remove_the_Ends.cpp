//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vector<ll>pos(n+1),neg(n+1);
    
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        if(x>=0) pos[i]=x;
        else neg[i]=abs(x);
    }
    for(int i=1;i<=n; i++) 
    {
        pos[i]+=pos[i-1];
        neg[i]+=neg[i-1];
    }

    ll ans=0;
    for(int i=1; i<=n;i++)
    {
        ll dd=max((pos[i]+neg[n]-neg[i]),(pos[i]+neg[n]-neg[i-1]));
        ans=max(ans,dd);

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