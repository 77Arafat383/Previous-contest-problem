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
#define si(x) int(x.size())
const int N=1e5;

// a = odd
// b = (a ^ 2 - 1) / 2
// c = b + 1 = (a ^ 2 + 1) / 2


void solve()
{
    ll n;
    cin>>n;
    ll lo=1,hi=n;
    ll ans=0;
    while(lo<=hi)
    {
        ll mid=lo+(hi-lo)/2LL;
        ll a=(2LL*mid)-1LL;
        ll c=(a*a+1LL)/2LL;
        if(c<=n)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1LL;
        }
    }
    cout<<ans-1<<nxt;
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