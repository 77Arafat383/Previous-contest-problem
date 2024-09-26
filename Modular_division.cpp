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
const int N=1e5;

ll binex(ll a, ll b, ll m)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%m;
        }
        a=(a*a)%m;
        b>>=1;
    }
    return ans;
}


void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll dd=binex(b,n-2,n);
    ll ans=(dd*a)%n;
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