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
    string l,r;
    cin>>l>>r;
    int n=r.size();
    int m=l.size();
    int gap=n-m;
    rev(l);
    for(int i=0; i<gap; i++) l.push_back('0');
    rev(l);
    cout<<l<<' '<<r<<'\n'; 
    int prev_dif=0;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
         if(r[i]>l[i])
         {
            ans+=(r[i]-l[i])+prev_dif*10;
            prev_dif=r[i]-l[i];
         }
         else
         {
            ans+=(10-(l[i]-r[i]))*prev_dif;
            prev_dif=(10-(l[i]-r[i]));
         }
    }
    cout<<ans<<'\n';

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