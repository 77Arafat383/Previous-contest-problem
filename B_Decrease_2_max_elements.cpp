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
   vector<int>v(n);
   for(auto &it:v) cin>>it;
   sort(v.rbegin(),v.rend());
   int a=v[0],b=v[1];
   int cnt=0;
   while(a!=0 and b!=0)
   {
      v[0]--;
      v[1]--;
      cnt++;

      sort(v.rbegin(),v.rend());
      a=v[0],b=v[1];

   }
   cout<<cnt<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}