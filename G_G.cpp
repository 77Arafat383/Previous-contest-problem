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
   int a,b;
   cin>>a>>b;
   int ans=0;
   int lo=0,hi=2e9+10;
   while(lo<=hi)
   {
    int mid=(lo+hi)/2;
    int com=mid/6;
    int two=mid/2;
    int three=mid/3;
    int tem=two+three-com;
    
    if(tem>=a+b and two>=a and three>=b)
    {
       
        ans=mid;
        hi=mid-1;
       // cout<<ans<<endl;
    }
    else
    {
        lo=mid+1;
    }
   }
   cout<<ans<<endl;
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