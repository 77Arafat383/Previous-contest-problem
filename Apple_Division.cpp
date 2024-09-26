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


ll check(vector<ll>&v, int i, ll recent_sum, ll total_sum)
{
    if(i==0)
    {
        return abs((total_sum-recent_sum)-recent_sum);
    }
    return min(check(v, i-1,recent_sum+v[i-1],total_sum),check(v,i-1,recent_sum,total_sum));
}


void solve()
{
    int n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    ll total_sum=0;
    for(auto &it:v) total_sum+=it;
    cout<<check(v,n,0,total_sum)<<endl;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}