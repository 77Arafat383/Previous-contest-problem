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

ll lcm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
}


void solve()
{
    ll r1,r2;
    double d;
    cin>>r1>>r2>>d;
  
   r1*=2;
   r2*=2;
    ll lc=lcm(r1,r2);
    double dd=lc*3.14159;
    double ans=d/dd;
    ll ans1=ans;
    cout<<ans1<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}