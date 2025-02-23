//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>v;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        ll m,f;
        cin>>m>>f;
       // ans=max(ans,f);
        v.push_back({m,f});
    }
    sort(all(v));
    vector<pair<ll,ll>>pref(n+1);
    for(int i=0; i<n; i++)
    {
        pref[i+1].first=v[i].first;
        pref[i+1].second+=pref[i].second+v[i].second;
    }
   //for(auto &[x,y]:pref) cout<<x<<' '<<y<<'\n';
    
    ll st=1,en=1;
    while(en<=n)
    {
        
        while(pref[en].first-pref[st].first+1>k and st<en)
        {
            st++;
        }
        if(pref[en].first-pref[st].first+1<=k)
           ans=max(ans,pref[en].second-pref[st-1].second);
        en++;
     
    }
    cout<<ans<<'\n';
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