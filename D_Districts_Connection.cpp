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
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    vector<int>a,b;
    for(int i=1;i <=n; i++)
    {
        if(v[i]==v[1]) a.push_back(i);
        else b.push_back(i);
    }
    if(a.size()==0 or b.size()==0)
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    for(int i=0; i<b.size(); i++)
    {
        cout<<a[0]<<' '<<b[i]<<en;
    }
    for(int i=1; i<a.size(); i++)
    {
        cout<<a[i]<<' '<<b[0]<<en;
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