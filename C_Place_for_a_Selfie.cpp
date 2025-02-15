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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;
    sort(all(v));
    for(int t=1; t<=m; t++)
    {
        ll a,b,c;
        cin>>a>>b>>c;
        ll idx=lower_bound(all(v),b)-v.begin();
        if(idx!=n)
        {
            ll dd=v[idx];
            dd=(b-dd);
            dd*=dd;
            dd-=4LL*a*c;
            if(dd<0)
            {
                cout<<"YES\n";
                cout<<v[idx]<<en;
                continue;
            }
            
        }
        if(idx!=0)
        {
            idx--;
            ll dd=v[idx];
            dd=(b-dd);
            dd*=dd;
            dd-=4LL*a*c;
            if(dd<0)
            {
                cout<<"YES\n";
                cout<<v[idx]<<en;
                continue;
            }
        }
       
        cout<<"NO\n";
        
    }
    cout<<en;
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