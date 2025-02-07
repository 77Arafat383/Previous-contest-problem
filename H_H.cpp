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
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    vector<int>range(1e7+10,0);
    sort(all(v));
    for(ll i=0; i<n; i++)
    {
        range[v[i]]++;
    }
    for(ll i=1; i<1e7+2; i++)
    {
        range[i]+=range[i-1];
    }
   
    ll ans=0;
    map<ll,ll>mp;
    for(ll i=0; i<n-1; i++)
    {
        ll num=v[i];
        mp[num]++;
        ll last=0;
        if(v[i]!=0)
          last=range[v[i]-1];
          ll j=2;
       //   cout<<v[i]<<en;
        bool ok=true;
        while(num*j<=1e6)
        {
            
           
          
            ans+=(range[num*j-1]-last)*(j-1);
            if(ok) 
            {
                ans-=mp[num];
                ok=false;
            }
            last=range[num*j-1];
            j++;
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