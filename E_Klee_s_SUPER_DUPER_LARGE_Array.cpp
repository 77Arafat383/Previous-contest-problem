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
    ll  bad=(k*(k-1))/2;
    ll sz=n+k-1;
    ll total=(sz*(sz+1))/2;
    total-=bad;
    ll target=total/2;
    ll lo=1,hi=1e9+10;
    ll mn=0;
    ll ans=0;
    ll temp=0;
    while(lo<=hi)
    {
        ll mid=(hi+lo)/2;
        ll dd=mid+k-1;
        ll tem_total=dd*(dd+1)/2;
        tem_total-=bad;
        if(tem_total<=target)
        {
            mn=mid;
            
            ans=abs(total-2*tem_total);
            ans=min(ans,abs(total-2*(tem_total+dd+1)));
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