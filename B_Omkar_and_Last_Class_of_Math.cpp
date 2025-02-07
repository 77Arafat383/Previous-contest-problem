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
ll lcm(ll &a, ll &b)
{
      return (a*b)/__gcd(a,b);
}
void solve()
{
    ll n;
    cin>>n;
    if(!(n&1))
    {
        cout<<n/2<<' '<<n/2<<en;
        return;
    }
    pair<ll,ll>ans={LLONG_MAX,-1};
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            ll a=i;
            ll b=n-i;
            ll lc=lcm(a,b);
            if(a and b) ans=min(ans,{lc,a});

            a=n/i;
            b=n-a;
            lc=lcm(a,b);
            if(a and b) ans=min(ans,{lc,a});
        }
        
    }

    cout<<ans.second<<' '<<n-ans.second<<en;
        return;

}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}