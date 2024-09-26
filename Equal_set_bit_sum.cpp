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
    int rem=n%4;
    rem=4-rem;
    if(rem==4) rem=0;
    n+=rem;
    n/=4;
    ll sum=n;
    ll dd=(n-1)*4;
    dd+=2;
    ll ans=sum*dd;
    ans/=2;
    cout<<ans<<endl;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);

int t;
cin>>t;
w(t) solve();
    return 0;
}