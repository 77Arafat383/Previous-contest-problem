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


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    ll n,k;
    cin>>n>>k;
    ll m;
    cin>>m;
    vector<ll>vip(m),pref(m);
    for(auto &it:vip) cin>>it;
    pref[0]=vip[0];
    for(int i=1; i<m; i++)
    {
        pref[i]+=pref[i-1]+vip[i];
    }
    ll lo=0,hi=n+100;
    ll ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll total=mid*(mid+1)/2;
        ll idx=upper_bound(all(vip),mid)-vip.begin();
        idx--;
        ll addition=pref[m-1];
        if(idx>=0) addition-=pref[idx];
       // cout<<mid<<" "<<addition<<" "<<idx<<" "<<total<<endl;
        if(total+addition<=k)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    cout<<ans<<en;
}
    return 0;
}