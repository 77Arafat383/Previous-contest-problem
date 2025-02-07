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
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    ll l,r;
    cin>>l>>r;
    int tem=0;
    for(int i=60; i>=0; i--)
    {
        if((l&(1LL<<i))!=(r&(1LL<<i)))
        {
            /* Since we need maximum number of different set 1:2 set bit in 3 pair*/
            ll a=(tem|(1LL<<i));
            ll b=a-1;
            ll c=b-1;
            if(c<l) c=a+1;
            cout<<a<<' '<<b<<' '<<c<<en;
            break;
        }
        else
        {
            tem|=(l&(1LL<<i));
        }
    }
}
    return 0;
}