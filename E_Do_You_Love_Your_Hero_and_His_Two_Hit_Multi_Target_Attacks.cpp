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


ll cal(ll &k)
{
    ll lo=2,hi=k;
    ll ans=0;
    while(lo<=hi)
    {
        ll m=lo+(hi-lo)/2LL;
        ll value=m*(m-1)/2LL;
        if(value<=k)
        {
           ans=m;
           lo=m+1;
        }
        else
        {
            hi=m-1;
        }
    }
    return ans;
}


void solve()
{
    ll k;
    cin>>k;
    vector<ll>ans;
    while(k>1)
    {
        ans.push_back(cal(k));
        ll x=ans.back();
        x=x*(x-1)/2LL;
        k-=x;
    }
    if(k==1) ans.push_back(2);
   // printv(ans);
   if(si(ans)==0)
   {
    cout<<1<<'\n';
    cout<<1<<' '<<2<<'\n';
    return;
   }
   ll cnt=1;
   ll cnt2=1;
   vector<pair<int,int>>v;
   for(int i=0; i<si(ans); i++)
   {
     for(int j=0; j<ans[i]; j++)
     {
        v.push_back({cnt,cnt2});
        cnt2++;
     }
     cnt++;
   }
   cout<<si(v)<<'\n';
   for(auto &[x,y]:v) cout<<x<<' '<<y<<'\n';



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