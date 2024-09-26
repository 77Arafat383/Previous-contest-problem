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
    ll total=2*n-1;
    ll total_cel=n*n;
    ll lo=0,hi=total;
    ll ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        
        ll dd=mid/2;
        ll free=dd*(dd+1);
        if(mid&1) free+=dd+1;
        ll boked=total_cel-free;
        if(boked>=k)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }


    }
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