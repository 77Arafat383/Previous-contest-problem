//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  998244353;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;

ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}


void solve()
{
    ll n,m;
    cin>>n>>m;
    if(n*m==1)
    {
        cout<<4<<endl;
        return;
    }
    ll ans=n+m;
    ans=binex(2,ans);
    cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}