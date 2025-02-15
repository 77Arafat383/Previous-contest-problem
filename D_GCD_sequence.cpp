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
    vector<ll>v(n+1);
    for(int i=0; i<n; i++) cin>>v[i];
    vector<ll>b,pref,suf(n+1);
    b.push_back(-1);
    for(int i=0; i<n-1; i++)
    {
        b.push_back(__gcd(v[i],v[i+1]));
    }
    b.push_back(INT_MAX);
    pref.push_back(1);
    int c=1;
    for(int i=1; i<b.size(); i++)
    {
        if(b[i-1]>b[i]) c=0;
        pref.push_back(c);
    }
    c=1;
    suf[n]=1;
    for(int i=n-1; i>=0; i-- )
    {
        if(b[i]>b[i+1]) c=0;
        suf[i]=c;
    }

    // printv(v);
    // printv(b);
    // printv(suf);
    // printv(pref);
    bool ans=0;

    if(suf[2]==1) ans=1;
    else if(pref[n-2]==1) ans=1;
    if(ans)
    {
        cout<<"YES\n";
        return;
    }

    for(int i=1; i<n-1; i++)
    {
        ll gc=__gcd(v[i-1],v[i+1]);
        if(gc>=b[i-1] and gc<=b[i+2])
        {
            if(pref[i-1]==1 and suf[i+2]==1)
            {
                cout<<"YES\n";
                return;
            }
        }
    }
    cout<<"NO\n";
    return;
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