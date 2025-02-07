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
    string a,b,ans;
    cin>>a>>b;
    rev(a);
    rev(b);
    if(a.size()<b.size()) swap(a,b);
    int n=a.size();
    int m=b.size();
    int rest=0;
    for(int i=0; i<min(n,m); i++)
    {
        int aa=a[i]-'0';
        int bb=b[i]-'0';
        int sum=aa+bb+rest;
        int pos=sum%10;
        rest=sum/10;
        char ch=pos+'0';
        ans.push_back(ch);
    }
    
    for(int i=m; i<n; i++)
    {
        int aa=a[i]-'0';
        int sum=aa+rest;
        int pos=sum%10;
         rest=sum/10;
        char ch=pos+'0';
        ans.push_back(ch);
    }
    if(rest)
    {
       char ch=rest+'0';
       ans.push_back(ch);
    }

    rev(ans);
    cout<<ans<<en;
    
    
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}