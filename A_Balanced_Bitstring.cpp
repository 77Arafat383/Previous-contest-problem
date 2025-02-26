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
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    vector<int> a(k),b(k),c(k);
    for(int i=0;i<n;i++)
    {
        if(str[i]=='0') a[i%k]=1;
        else if(str[i]=='1') b[i%k]=1;
        else c[i%k]=1;
    }
    bool ok=true;
  //  printv(a);printv(b);printv(c);
    for(int i=0;i<k;i++)
    {
        if(a[i]&&b[i]) ok=false;
        if(a[i])
        {
            for(int j=i;j<n;j+=k) str[j]='0';
            c[i]=0;
        }
        if(b[i])
        {
            for(int j=i;j<n;j+=k) str[j]='1';
            c[i]=0;
        }
    }

    int cnt0=0,cnt1=0;
    for(int i=0;i<k;i++)
    {
        if(str[i]=='0') cnt0++;
        if(str[i]=='1') cnt1++;
    }
    // cout<<cnt0<<' '<<cnt1<<nxt;
    // printv(a);printv(b);printv(c);
    if(cnt0>k/2||cnt1>k/2) ok=false;
    if(ok) cout<<"YES\n";
    else cout<<"NO\n";
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