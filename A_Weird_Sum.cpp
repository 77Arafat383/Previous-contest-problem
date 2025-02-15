//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;

// bool cmp1(pair<int,int>&a, pair<int,int>&b)
// {
//     return a.first<=b.first;
// }

// bool cmp2(pair<int,int>&a, pair<int,int>&b)
// {
//     return a.second<=b.second;
// }



void solve()
{
    ll n,m;
    cin>>n>>m;
    map<ll,vector<pair<ll,ll>>>mp;
    for(ll i=1; i<=n; i++)
    {
        for(ll j=1; j<=m; j++)
        {
            ll x;
            cin>>x;
            mp[x].push_back({i,j});
        }
    }
    ll ans=0;
    for(auto &[t,v]:mp)
    {
        sort(all(v),[&](auto a, auto b){ return a.first<b.first;});
        ll sum=0;
        ll sz=v.size();
        for(int i=0; i<sz; i++)
        {
            ans+=v[i].first*i-sum;
            sum+=v[i].first;
        }
    }
    
    for(auto &[t,v]:mp)
    {
        sort(all(v),[&](auto a,auto b){ return a.second<b.second;});
        ll sum=0;
        ll sz=v.size();
        for(int i=0; i<sz; i++)
        {
            ans+=v[i].second*i-sum;
            sum+=v[i].second;
        }
    }

    cout<<ans<<en;

}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}