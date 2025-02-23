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
    ll n;
    cin>>n;
    vector< int>v(n);
    int gc=0;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]==1) cnt++;
        gc=__gcd(gc,v[i]);
    }
    if(gc!=1)
    {
        cout<<"-1\n";
        return;
    }

    if(cnt)
    {
        cout<<n-cnt<<'\n';
        return;
    }
    int need=1e9;
    for(int i=0; i<n; i++)
    {
        int gc=0;

        for(int j=i; j<n; j++)
        {
            gc=__gcd(gc,v[j]);
            if(gc==1)
            {
                need=min(need,j-i);
                break;
            }
        }
    }
    cout<<n-1+need<<'\n';
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