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
    ll n,m;
    cin>>n>>m;
    ll mex=0;
    for(int i=0; i<n; i++)
    {
        ll k;
        cin>>k;
        set<ll>s;
        for(int j=0; j<k; j++)
        {
            ll x;
            cin>>x;
            s.insert(x);
        }
        int cnt=0;
        for(ll mx=0; ; mx++)
        {
            if(!s.count(mx))
            {
                cnt++;
                if(cnt==2)
                {
                    mex=max(mex,mx);
                    break;
                }
            }
        }
    }
    if(mex>m)
    {
        cout<<mex*(m+1)<<en;
        return;
    }
    ll ans=mex*mex;
    ll dd=(m*(m+1)/2)-(mex*(mex-1)/2);
    if(dd<0) dd=0;
    ans+=dd;
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