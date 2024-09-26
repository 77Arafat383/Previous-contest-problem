//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl




void solve()
{
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    ll ans=0;
    for(ll i=1; i<=a; i++)
    {
        if(d%i) continue;
        for(ll j=1; j<=b; j++) 
        {
            if(d%(i*j)) continue;
            ll k=d/(i*j);
            ll tem=1;
            tem*=max(0LL,(a-i+1));
            tem*=max(0LL,(b-j+1));
            tem*=max(0LL,(c-k+1));
            ans=max(ans,tem);
        }
    }
    cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}