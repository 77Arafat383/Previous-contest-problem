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
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v;
    for(int i=0; i<n; i++)
    {
        ll m;
        cin>>m;
        ll mx=0;
        for(int j=0; j<m; j++)
        {
            ll x;
            cin>>x;
            mx=max(mx,x-j+1);
        }
        v.push_back({mx,m});
    }
    sort(all(v),[&](auto a, auto b){
        if(a.first==b.first) return a.second>b.second;
        return a.first<b.first;
    });
    ll dif=v[0].first;
    //for(auto &[x,y]:v) cout<<x<<' '<<y<<en;
    ll r=v[0].second+v[0].first;
    for(int i=1; i<v.size(); i++)
    {
        if(v[i].first>r)
        {
            ll extra=v[i].first-r;
            dif+=extra;
            r+=extra;
        }
        r+=v[i].second;
    }
    cout<<dif<<en;
}
signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}