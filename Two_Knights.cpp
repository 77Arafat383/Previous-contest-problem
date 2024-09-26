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


ll calculate(ll n)
{
    ll ans=n*n;
    ans=(ans*(ans-1))/2;
    ans-=(4*(n-1)*(n-2));
    return ans;
}

void solve()
{
    ll n;
    cin>>n;
    for(ll i=1; i<=n; i++)
    {
        cout<<calculate(i)<<endl;
    }
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}