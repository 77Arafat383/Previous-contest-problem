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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n+1);
    ll k_parbo=0;
    ll mx=0;
    ll total=0;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        mx=max(mx,v[i]);
        total+=v[i];

    }
    for(int i=1; i<=n; i++)
    {
        if(v[i]<mx)
        {
            k_parbo+=mx-v[i];
        }
    }
    if(k>k_parbo) k=k_parbo;
    ll ans=total/mx;
    ll rest=total%mx;
    rest+=k;
    ans+=rest/mx;
    cout<<ans<<endl;
}


signed main()
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