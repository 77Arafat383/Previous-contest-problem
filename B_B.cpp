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
    int n,m,h;
    cin>>n>>m>>h;
    vector<ll>capacity(n),power(m);
    for(auto &it:capacity) cin>>it;
    for(auto &it:power) cin>>it, it*=h;
    sort(capacity.rbegin(),capacity.rend());
    sort(power.rbegin(),power.rend());
    ll ans=0;
    int i=0,j=0;
    while(i<n and j<m)
    {
        if(capacity[i]<=power[j])
        {
            ans+=capacity[i];
            i++;
            j++;
        }
        else 
        {
            ans+=power[j];
            i++;
            j++;
        }
    }
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