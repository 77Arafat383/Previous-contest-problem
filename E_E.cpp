//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define endline '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endline
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endline
#define printmv(a) for(auto [x,v]:a) {cout<<x<<endline; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<ll>v(n),ans(n);
    for(auto &it:v) cin>>it;
    ll mx=*max_element(all(v));
    ll sum=accumulate(all(v),0);
    ll left=k-sum;
   //cout<<left/n+(left%n!=0)<<endline;
    // int cnt=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(v[i]<m) cnt++;
    // }
    // ll div=left/(n-cnt);
    // mx+=div;
    for(int i=0; i<n; i++)
    {
        if(v[i]<m) ans[i]=-1;
        else
        {
            ll dif=left-(mx-v[i]);
            if(dif&1) dif++;
            dif/=2;
            dif+=(mx-v[i]);
            ans[i]=dif;
        }
    }
    vector<ll>maxi;
    //printv(ans);
  //  cout<<endline;
    for(int i=0; i<n; i++)
    {
        if(ans[i]==-1) cout<<ans[i]<<' ';
        else 
        {
            maxi.push_back(ans[i]+v[i]);
        }
    }
    sort(all(maxi));
    maxi.erase(unique(all(maxi)),maxi.end());
    int dd=maxi.size();
    ll second=maxi[dd-1];
    if(dd!=1) second=maxi[dd-2];
    cout<<second<<endline;
    for(int i=0; i<n; i++)
    {
        if(maxi[i]>second) ans[i]-=(maxi[i]-second);
    }
     
    printv(ans);
    // int cnt=0;
    // for(int i=0; i<n; i++)
    // {
    //     if(v[i]<m) ans[i]=-1;
    //     else 
    //     {
    //         cnt++;
    //     }
    // }

    // for(int i=0; i<n; i++)
    // {
    //     if(ans[i]==-1) continue;
    //     int need=mx-v[i];
    //     ll rest=left-need;
    //     ll div=rest/cnt+(rest%cnt!=0);
    //     ans[i]=need+rest-div;
    // }
    
    // printv(ans);



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