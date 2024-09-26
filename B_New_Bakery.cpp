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

ll prop(ll k,ll a, ll b,ll n)
{
    ll temp=k*(b+1);
    temp-=(k*(k+1))/2;
    temp+=(n-k)*a;
    return temp;
}


void solve()
{
    ll n,a,b;
    cin>>n>>a>>b;
    ll lo=0,hi=min(n,b);
    ll ans=LLONG_MIN;
    for(int mid=lo; mid<=hi; mid++)
    {
        ll temp=prop(mid,a,b,n);
        if(ans<=temp)
        {
            ans=temp;
        }
        else
        {
            break;
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