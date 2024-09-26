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
    ll h,n;
    cin>>h>>n;
    vector<ll>a(n),c(n);
    for(auto &it:a) cin>>it;
    for(auto &it:c) cin>>it;
    ll lo=1,hi=1e12+10;
    ll ans=LLONG_MAX;
    while(lo<=hi)
    {
        ll tem=h;
        ll mid=(lo+hi)/2;
        for(int i=0; i<n; i++)
        {
            ll jotobar_parbe=1+(mid-1)/c[i];
            tem-=jotobar_parbe*a[i];
            if(tem<=0) break;
        }
        if(tem<=0)
        {
            ans=mid;
            hi=mid-1;
        }
        else
        {
            lo=mid+1;
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