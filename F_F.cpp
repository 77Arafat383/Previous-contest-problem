//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vector<ll>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++) v.push_back({a[i],b[i]});
    sort(v.rbegin(),v.rend());
    ll ans=v[0].first;
    ll val=v[0].second;
    for(int i=1; i<n; i++)
    {
        ll tem=max(val,v[i].first);
        ans=min(ans,tem);
        val+=v[i].second;
    }
    ans=min(ans,val);
    cout<<ans<<endl;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}