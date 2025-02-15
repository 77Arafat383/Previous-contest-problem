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
    ll n,k,x;
    cin>>n>>k>>x;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    sort(all(v));
   // printv(v);
    vector<ll>dif;
    for(int i=1; i<n; i++)
    {
        ll div=v[i]-v[i-1];
        if(div>x) dif.push_back(div-1);
    }
    sort(dif.rbegin(),dif.rend());
   // printv(dif);
    int m=dif.size();
    for(int i=m-1; i>=0; i--)
    {
        ll need=dif[i]/x;
        if(need<=k)
        {
            k-=need;
            dif.pop_back();
        }
        else
        {
            break;
        }
    }
    cout<<dif.size()+1<<en;
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