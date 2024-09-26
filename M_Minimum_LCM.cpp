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
    vector<int>divisors;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0) 
        {
            divisors.push_back(i);
            if(i*i!=n)divisors.push_back(n/i);
        }
    }
    sort(all(divisors));
    ll ans=LLONG_MAX;
    ll a=1,b=n-1;
    for(auto &it:divisors)
    {
        ll x=it;
        ll y=n-it;
        if(x==0 || y==0) continue;
        ll dd=(x*y)/__gcd(x,y);
        if(dd<ans)
        {
            ans=dd;
            a=x;
            b=y;
        }
    }
    cout<<a<<" "<<b<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}