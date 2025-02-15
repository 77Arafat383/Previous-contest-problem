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




void solve()
{
    int n;
    cin>>n;
    vector<ll>u(n),sg(n);
    for(auto &it:u) cin>>it;
    for(auto &it:sg) cin>>it;
    map<ll,vector<ll>>mp;
    for(int i=0; i<n; i++)
    {
        mp[u[i]].push_back(sg[i]);
    }
    for(auto &[x,v]:mp)
    {
        v.push_back(0);
        sort(all(v));
        for(int i=1; i<v.size(); i++)
        {
            v[i]+=v[i-1];
        }
    }
    
    vector<ll>ans(n+1,0);
    for(auto &[z,v]:mp)
    {
        for(ll k=1; k<=n; k++)
        {
            ll dd=v[v.size()-1]-v[(v.size()-1)%k];
            if(dd==0) break;
            ans[k]+=dd;
        }
    }
    for(int i=1; i<=n; i++) cout<<ans[i]<<' '; cout<<en;
    // for(ll k=1; k<=n; k++)
    // {
    //     ll sum=0;
    //     for(auto &[x,v]:mp)
    //     {
        
    //         ll sz=v.size();
    //         if(k>=sz) continue;
    //         ll rem=(sz-1)%k;
    //         sum+=v[sz-1]-v[rem];
    //     }
    //     cout<<sum<<' ';
    // }
    // cout<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}