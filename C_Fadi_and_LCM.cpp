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


bool lcm(ll a, ll b)
{
    return (a*b)/__gcd(a,b);
}

void solve()
{
    ll n;
    cin>>n;
    ll a=1,b=1;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0 and lcm(n/i,i)==n)
        {
            a=i;
            b=n/i;

        }
    }
    cout<<a<<" "<<b<<endl;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}