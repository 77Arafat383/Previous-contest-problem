//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl




void solve()
{
   int n,q;
   cin>>n>>q;
   vector<ll>v(n+1);
   for(int i=1; i<=n; i++) cin>>v[i];
   w(q)
   {
     ll num;
     cin>>num;
     int ans=n+1;
     int st=1,en=n;
     while(st<=en)
     {
        int mid=(en+st)/2;
        if(v[mid]<num)
        {
           
            st=mid+1;
        }
        else
        {
             ans=min(ans,mid);
            en=mid-1;
        }
        
     }
     cout<<ans<<endl;
   } 
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}