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
    ll n,k;
    cin>>n>>k;
    vector<ll>v;
    for(int i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i==sqrt(n)) continue;
            v.push_back(n/i);
        }
    }
    sort(all(v));
    if(v.size()<k)
    {
        cout<<"-1\n";
        return;
    }
    cout<<v[k-1]<<endl;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}