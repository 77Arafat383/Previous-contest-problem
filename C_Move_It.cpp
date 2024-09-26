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
    map<int,vector<ll>>mp;
    vector<ll>a(n+1),wet(n+1);
    for(int i=1; i<=n; i++) cin>>a[i];
    for(int i=1; i<=n; i++) cin>>wet[i];
    for(int i=1; i<=n; i++)
    {
        mp[a[i]].push_back(wet[i]);
    }
    ll ans=0;
    for(auto &it:mp)
    {
        auto &vv=it.second;
        ll mx=vv[0];
        ll sum=0;
        for(auto &it:vv)
        {
            sum+=it;
            mx=max(mx,it);
        }
        sum-=mx;
        ans+=sum;
    }
    cout<<ans<<endl;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}