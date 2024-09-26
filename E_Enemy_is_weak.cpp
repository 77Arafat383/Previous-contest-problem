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
    multiset<ll>s;
    ll ans=0;
    for(int i=1; i<=n; i++)
    {
        ll x;
        cin>>x;
        s.insert(x);
        auto it=s.upper_bound(x);
        ll dd=i-distance(s.begin(),it);
        dd--;
        cout<<dd<<endl;
        if(dd<1) continue;
        ans+=(dd*(dd+1))/2;

    }
   cout<<ans<<endl;
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}