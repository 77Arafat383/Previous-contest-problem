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
    map<pair<int,int>,int>mp;
    vector<int>deg(n+1);
    vector<pair<int,int>>v;

    for(int i=1; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        mp[{x,y}]++;
        deg[x]++;
        deg[y]++;
    }

    for(int i=1; i<=n; i++)
    {
        v.push_back({deg[i],i});
    }

    sort(v.rbegin(),v.rend());
    ll ans=0;
    for(int i=0; i<2; i++)  // if we count for best two then it's enough;
    {
        for(int j=i+1; j<n; j++)
        {
            ll total_possible=v[i].first+v[j].first-1; 
            if(mp.count({v[i].second,v[j].second}) or mp.count({v[j].second,v[i].second}))
            {
                //edge exist
                total_possible--;
            }
            ans=max(ans,total_possible);
        }
    }
    cout<<ans<<en;

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