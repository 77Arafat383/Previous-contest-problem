//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
const ll INF =  1e18;
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
    //hi this is just for fun
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n+1),pos(n+1,0);
    for(int i=1; i<=n;i++)cin>>v[i];
    ll cnt=0;
    for(int i=1;i<=n;i++)
    {
        pos[i]=cnt;
        if(v[i]!=0) cnt=k+1;
        if(cnt) cnt--;
    }
    cnt=0;
    for(int i=n; i>=1;i--)
    {
        pos[i]=cnt;
        if(v[i]!=0) cnt=k+1;
        if(cnt) cnt--;
    }
    int ans=0;
    int mx=0;
    for(int i=1; i<=n; i++)
    {
        if(pos[i]==0 and v[i]!=0) 
        {
            if(v[i]>mx)
            {
                mx=v[i];
               ans=i;
            }
        }
    }
    if(!ans)
    {
        cout<<"Impossible\n";
        return;
    }
    cout<<ans<<'\n';

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