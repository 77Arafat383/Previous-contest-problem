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
    ll n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    sort(all(v));
    ll l=v[n-1];
    ll r =l+(k-1);
   // printv(v);
  //  cout<<l<<' '<<r<<en;
    for(int i=n-2; i>=0; i--)
    {
        ll div=l-v[i];
        // cout<<l<<' '<<r<<en;
        // cout<<div<<en;
        div/=k;
        // cout<<div<<en;

        if(div&1) 
        {
        //   //  cout<<div<<' ';
        //     cout<<i+1<<' ';
        //     cout<<"-1\n";
        //     return;
             div++;
        }
        if(l>=div*k+v[i] and  l<=v[i]+div*k+(k-1))
        {
           l=max(l,div*k+v[i]);
           r=min(r,v[i]+div*k+(k-1));
        }
        else if(r>=div*k+v[i] and  r<=v[i]+div*k+(k-1))
        {
            l=max(l,div*k+v[i]);
            r=min(r,v[i]+div*k+(k-1));
        }
        else
        {
           // cout<<div<<en;
           // cout<<div*k+v[i]<<' '<<v[i]+div*k+(k-1)<<' ';
            cout<<-1<<en;
            return;
        }
       // cout<<l<<' '<<r<<en;

    }
    cout<<l<<en;
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