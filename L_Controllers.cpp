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
    ll n;
    cin>>n;
    string str;
    cin>>str;
    ll pos=count(all(str),'+');
    ll neg=n-pos;
    ll q;
    cin>>q;
    w(q)
    {
        ll a,b;
        cin>>a>>b;
        ll gc=__gcd(a,b);
        a/=gc;
        b/=gc;
        if(a==b)
        {
            Judge(pos==neg);
        }
        else if(abs(pos-neg)%abs(a-b)!=0) 
        {
            Judge(0);
        }
        else
        {
            ll div=abs(pos-neg)/abs(a-b);
            Judge(min(a,b)*div<=min(pos,neg));
           
        }
    }
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