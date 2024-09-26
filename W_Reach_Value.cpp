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


map<ll,bool>mp;
bool check(ll n)
{
    if(mp[n]!=0) return mp[n];
    if(n==1)
    {
        return 1;
    }
    if(n<1)
    {
        return 0;
    }
   bool ok=0;
    if(n%10==0)
    {
        ok+=check(n/10);

    }
    if(n%20==0)
    {
        ok+=check(n/20);
    }
    return mp[n]=ok;
}

void solve()
{
    ll n;
    cin>>n;
    if(check(n))
    {
        cout<<"YES\n";
        return;
    }
    
   cout<<"NO\n";
   
}

int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}