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
const int N=1e5;
bool calculation(double n, double a, double b)
{
  
   double bb=pow(.5,n);
   bb=1-bb;
   bb*=2*a;
   bb/=n;
   double tot=b;
   if(tot>bb) return 1;
   return 0;
    
}
// bool cal(ll n, ll a, ll b)
// {
//     if(2*a<b*n)
//     {
//         return 1;
//     }
//     return 0;
// }



void solve()
{
   double a,b;
   cin>>a>>b;
   ll st=0, en=1e18+100;
   ll ans=M;
    while(st<=en)
    {
        double mid=(st+en)/2;
        
        if(calculation(mid,a,b))
        {
            ans=mid;
            en=mid-1;
        }
        else
        {
            st=mid+1;
        }

    }
    cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int  i=1; i<=t; i++)
{
    cout<<"Case #"<<i<<": ";
    solve();
}
    return 0;
}