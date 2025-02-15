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


ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1) ans=(ans*a);
        a=(a*a);
        b>>=1;
    }
    return ans;
}

void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    ll lo=0,hi=1e16;
    ll level=0;
    while(lo<=hi)
    {
        ll mid=lo+(hi-lo)/2;
        ll store=k;
        for(int i=0; i<n; i++)
        {
            if(v[i]<mid)
            {
                ll need=mid-v[i];
                store-=need;
                if(store<0) break;
            }
        }
        if(store>=0)
        {
            level=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }

    }
    ll extra=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]>level) extra++;
        else if(v[i]<level)
        {
            k-=level-v[i];
        }
    }
    extra+=k;
   // cout<<level<<' '<<extra<<en;
    ll ans=level*(extra+1);
    ans+=(level-1)*(n-(extra+1));
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