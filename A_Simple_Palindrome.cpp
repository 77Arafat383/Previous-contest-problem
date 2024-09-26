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




void solve()
{
   int n;
   cin>>n;
   string str,tem="aeiou";
   if(n<=5)
   {
    for(int i=0; i<n; i++)
    {
        str.push_back(tem[i]);
    }
    cout<<str<<endl;
    return;
   }
   int cnt=n/5;
   int rem=n%5;
   int no=0;
   for(int i=0; i<4; i++)
   {
      for(int j=0; j<cnt; j++)
      {
        str.push_back(tem[i]);
        no++;
      }
      if(rem)
      {
        str.push_back(tem[i]);
        rem--;
        no++;
      }
   }
   for(; no<n; no++) str.push_back(tem[4]);
   cout<<str<<endl;
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