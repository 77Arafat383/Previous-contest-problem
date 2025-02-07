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
     vector<ll>v(n+1);
     for(ll i=1; i<=n;i++) cin>>v[i];
     sort(all(v));
    if(n==1)
     {
        cout<<1<<en;
        return;
     }
     if(!(n&1))
     {
        ll mx=0;
        for(int i=1; i<=n; i+=2)
        {
           mx=max(mx,v[i+1]-v[i]);
        }
        cout<<mx<<en;
     }
     else
     {
        vector<ll>before,after;
        before.push_back(0);
        for(int i=2; i<n; i+=2)
        {
            before.push_back(v[i]-v[i-1]);
            after.push_back(v[i+1]-v[i]);
        }
        ll mx=0;
        for(int i=1; i<before.size(); i++)
        {
            if(before[i]>mx)
            {
                mx=before[i];
            }
            before[i]=mx;
        }
        
        mx=0;
        for(int i=after.size()-1; i>=0; i--)
        {
            if(after[i]>mx)
            {
                mx=after[i];
            }
            after[i]=mx;
        }
        after.push_back(0);
        // check;
        // printv(before);
        // printv(after);
        ll ans=after[0];
        ll m=before.size();
        for(int i=0; i<m; i++)
        {
           ans=min(ans,max(before[i],max(after[i],1LL)));
        }
        cout<<ans<<en;
     }
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