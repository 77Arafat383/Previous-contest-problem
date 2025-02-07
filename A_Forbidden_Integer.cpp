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
    
    if(x!=1)
    {
        cout<<"YES\n";
        cout<<n<<en;
        for(int i=0; i<n; i++) cout<<1<<' '; cout<<en;
        return;
    }
    else if(k==1)
    {
        cout<<"NO\n";
        return;
    }
    else if(k>=2 and n%2==0)
    {
        cout<<"YES\n";
        cout<<n/2<<en;
        for(int i=1; i<=n; i+=2) cout<<2<<' '; cout<<en;
        return;
    }
    else if(k>2)
    {
        cout<<"YES\n";
        cout<<n/2<<en;
        cout<<3<<' ';
        for(int i=1; i<n/2; i++) cout<<2<<' '; cout<<en;
        return;
        
    }
    else
    {
        cout<<"NO\n";
        return;
    }


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