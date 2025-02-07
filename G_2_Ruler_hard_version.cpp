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
    int lo=1,hi=1000;
    while(lo<hi)
    {
       int mid1=lo+(hi-lo)/3;
       int mid2=hi-(hi-lo)/3;
       cout.flush();
       cout<<"? "<<mid1<<' '<<mid2<<en;
       cout.flush(); 
       int x;
       cin>>x;
       if(x==mid1*mid2)
       {
         lo=mid2+1;
       }
       else if(x==(mid1+1)*(mid2+1))
       {
            hi=mid1;
       }
       else if(x==mid1*(mid2+1))
       {
            lo=mid1+1;
            hi=mid2;
       }
      
    }
    cout.flush();
    cout<<"! "<<hi<<en;
    cout.flush();
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}