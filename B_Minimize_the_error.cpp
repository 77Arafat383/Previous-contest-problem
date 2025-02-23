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




void solve()
{
    ll n ,k1,k2;
    cin>>n>>k1>>k2;
    ll total=k1+k2;
    vector<ll>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    a.push_back(0);
    b.push_back(0);
    vector<ll>dif;
    for(int i=0; i<=n; i++)
    {
        ll div=abs(a[i]-b[i]);
        dif.push_back(div);
    }
    sort(dif.rbegin(),dif.rend());
    ll  i=0;
    ll level=dif[0];
 //   printv(dif);
    while(i<dif.size())
    {
        while(level>dif[i] and level>0)
        {
             if(total>=i)
             {
                total-=i;
                level--;
             }
             else
             {
                break;
             }
        }
        i++;
    }
    for(int i=0; i<dif.size(); i++)
    {
       if(dif[i]>level) dif[i]=level;
       if(total)
       {
          if(dif[i]>0) 
          {
            dif[i]--;
            total--;
          }
       }
    }
   // printv(dif);
    ll ans=0;
    for(int i=0; i<dif.size(); i++)
    {
          ans+=dif[i]*dif[i];
    }
    if(total&1) ans++;
    cout<<ans<<nxt;


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