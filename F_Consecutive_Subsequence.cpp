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
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    map<ll,ll>mp;
    vector<ll>track(n+1,0);
    for(int i=1; i<=n; i++)
    {
        mp[v[i]]=max(mp[v[i]],mp[v[i]-1]+1);
    }
  //  for(auto &[x,y]:mp) cout<<x<<' '<<y<<en;
    int mx=-1,value=-1;
    for(auto &[x,y]:mp)
    {
        if(y>mx)
        {
            mx=y;
            value=x;
        }
    }
    vector<int>ans;
    for(int i=n; i>=1; i--)
    {
        if(v[i]==value)
        {
            ans.push_back(i);
            value--;
        }
    }
    rev(ans);
    cout<<ans.size()<<en;
    printv(ans);
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