//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;

bool calculation(int a, int b, int c, int d)
{
    int f1=0,f2=0;
    if(a>b) f1++;
    else if(a<b) f2++;
    if(c>d) f1++;
    else if(c<d) f2++;
    return (f1>f2);
}


void solve()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int ans=0;
   ans+=calculation(a,c,b,d);
   ans+=calculation(a,d,b,c);
   ans+=calculation(b,d,a,c);
   ans+=calculation(b,c,a,d);

   cout<<ans<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}