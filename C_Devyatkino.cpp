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


bool is_okey(ll n)
{
    while(n)
    {
        if(n%10==7) return true;
        n/=10;
    }
    return false;
}

void solve()
{
    ll n;
    cin>>n;
    if(is_okey(n))
    {
        cout<<0<<'\n';
        return;
    }
    ll ans=INT_MAX;
    for(ll i=1; i<=9; i++)
    {
        ll add=pow(10,i)-1LL;
        for(ll j=1; j<=9; j++)
        {
            ll rwm=add*j;
            if(is_okey(n+rwm))
            {
              ans=min(ans,j);
            }
            
        }
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