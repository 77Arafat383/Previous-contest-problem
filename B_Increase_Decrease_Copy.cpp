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
    int n;
    cin>>n;
    vector<ll>a(n),b(n+1);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    bool ok=false;
    ll mx=INT_MAX;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ans+=abs(a[i]-b[i]);
        if((b[n]>=a[i] and b[n]<=b[i]) or (b[n]<=a[i] and b[n]>=b[i]))
        {
            ok=true;
        }
        mx=min(mx,abs(b[n]-a[i]));
        mx=min(mx,abs(b[n]-b[i]));
    }
    if(ok)
    {
        ans++;
        cout<<ans<<endl;
        return;
    }
    cout<<ans+mx+1<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}