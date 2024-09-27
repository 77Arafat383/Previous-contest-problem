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
    int n,a,b;
    cin>>n>>a>>b;
    int md=__gcd(a,b);
    vector<int>v(n);
    for(auto &i:v)
    {
        cin>>i;
        i%=md;
    }
    sort(all(v));
    int ans=v[n-1]-v[0];
    for(int i=0; i+1<n; i++)
    {
        ans=min(ans,v[i]+md-v[i+1]);// If lowest become maximum then next lowest will be it's 2nd element.
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