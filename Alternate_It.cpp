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
#define si(x) int(x.size())
const int N=1e5;




void solve()
{
    string str;
    cin>>str;
    int n=str.size();
    int cnt=0;
    if(str[0]=='1') cnt++;
    bool ok=true;
    for(int i=1; i<n; i++)
    {
        if(str[i]=='1') cnt++;
        if(str[i]==str[i-1]) ok=false;
    }
    if(ok)
    {
        cout<<0<<'\n';
        return;
    }
    int dif=abs(n-2*cnt);
    if(dif<=1)
    {
        cout<<1<<'\n';
        return;
    }
    dif/=2;
    if(dif<=1)
    {
        cout<<2<<'\n';
        return;
    }
    cout<<3<<'\n';

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