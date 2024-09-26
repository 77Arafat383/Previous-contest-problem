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
    ll n;
    cin>>n;
    
    if(n&1)
    {
        cout<<"YES\n";
        return;
    }
   for(ll i=2; i<=sqrt(n); i++)
   {
    while(n%i==0)
    {
        if(i&1 or n&1)
        {
           cout<<"YES\n";
           return;
        }
        
        n/=i;
    }
    
   }
   cout<<"NO\n";
   return;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}