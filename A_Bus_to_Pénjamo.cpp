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
    int n,r;
    cin>>n>>r;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    int ans=0;
    int extra=0;
    for(int i=0; i<n; i++)
    {
        int dd=v[i]/2;
        ans+=dd*2;
        r-=dd;
        extra+=v[i]%2;

    }
    if(extra<=r) ans+=extra;
    else
    {
        extra-=r;
        ans+=r-extra;
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