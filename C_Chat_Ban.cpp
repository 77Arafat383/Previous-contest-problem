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
    ll k,storage;
    cin>>k>>storage;
    ll lo=0,hi=k;
    ll ans;
    while(lo<=hi)
    {
        ll mid=lo+(hi-lo)/2LL;
        ll sum=mid*(mid+1LL)/2LL;
        if(storage>=sum)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }
    }
    ll value=ans*(ans+1LL)/2LL;
    storage-=value;
    if(ans<k)
    {
        if(storage>0) ans++;
        cout<<ans<<en;
        return;
    }
    k--;
    lo=0,hi=k;

    value=k*(k+1LL)/2LL;
    ll ans2;
    while(lo<=hi)
    {
         ll mid=lo+(hi-lo)/2LL;
         ll sum=mid*(mid+1LL)/2LL;
         sum=value-sum;
         if(sum<=storage)
         {
            ans2=mid;
            hi=mid-1;
         }
         else
         {
            lo=mid+1;
         }

    }

    value=value-(ans2*(ans2+1))/2LL;
    ans2=k-ans2;
    storage-=value;
    if(ans2!=k and storage>0) ans2++;
   // cout<<ans<<' '<<ans2<<' '<<storage<<en;
    ans+=ans2;
    cout<<ans<<en;
    return; 



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