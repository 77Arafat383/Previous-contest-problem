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

ll fact(ll n)
{
    if(n<2) return 1;
    return (n*fact(n-1))%M;
}


void solve()
{
    string str;
    cin>>str;
    map<char,int>m;
    for(auto &it:str) m[it]++;
    ll ans=1;
    for(auto &it:m)
    {
        ans=(ans*fact(it.second))%M;
    }
    cout<<ans<<endl;



}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}