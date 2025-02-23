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


vector<ll> pre_cal(vector<ll>&v)
{
    int n=v.size();
    vector<ll>div_seg(n+2,0);
    int cnt=0;
    for(int i=0; i<n; i++)
    {
       if(v[i]==1) cnt++;
       else
       {
          for(int j=1; j<=cnt; j++)
          {
            div_seg[j]+=max(0,cnt-j+1);
          }
          cnt=0;
       }
    }
    for(int j=1; j<=cnt; j++)
          {
            div_seg[j]+=max(0,cnt-j+1);
          }
          cnt=0;
    return div_seg;
}

void solve()
{
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll>a(n),b(m);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    vector<ll>seg_a,seg_b;
    seg_a=pre_cal(a);
    seg_b=pre_cal(b);
    // printv(seg_a);
    // printv(seg_b);
    ll ans=0;
    for(int i=1; i<seg_a.size(); i++)
    {
        if(k%i==0 and k/i>0 and k/i<=m)
        {
            ans+=seg_a[i]*seg_b[k/i];
        }
    }
    cout<<ans<<'\n';
    return;



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