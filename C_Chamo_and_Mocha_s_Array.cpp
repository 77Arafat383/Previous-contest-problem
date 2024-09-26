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
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    if(n==2)
    {
        cout<<min(v[0],v[1])<<endl;
        return;
    }
    ll ans=LLONG_MIN;
    for(int i=n-3; i>=0; i--)
    {
        ll arr[]={v[i],v[i+1],v[i+2]};
        sort(arr,arr+3);
        ans=max(ans,arr[1]);
    }
    cout<<ans<<endl;
    return;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}