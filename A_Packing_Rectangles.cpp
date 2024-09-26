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


bool check(ll wh, ll h, ll n,ll arm)
{
       
    
    ll dd=arm/wh;
    ll pp=arm/h;
    ll cnt=dd*pp;
    return cnt>=n;
    


}


void solve()
{
   
    ll wh,h,n;
    cin>>wh>>h>>n;
   
     
  
      ll st=0;
      ll en=1;
      while(!check(wh,h,n,en))
      {
        en*=2;
      }
 
    ll ans=0;
    while(st<=en)
    {
       
            
       
        ll mid=st+(en-st)/2;
        if(check(wh,h,n,mid))
        {
             
            en=mid-1;
            ans=mid;

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
int t;
t=1;
w(t) solve();
    return 0;
}