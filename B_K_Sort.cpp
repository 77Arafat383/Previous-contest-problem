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




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    map<int,int>mp;
    int pv=0;
    ll total=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]>=pv) pv=v[i];
        else 
        {
            int dd=pv-v[i];
            mp[dd]++;
            total++;
        }
    }
    ll ans=0;
    ll bad=0;
    for(auto &[x,y]:mp)
    {
        ll current_lagbe=total+1;
        current_lagbe*=(x-bad);
        total-=y;
        bad=x;
        ans+=current_lagbe;

    }
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