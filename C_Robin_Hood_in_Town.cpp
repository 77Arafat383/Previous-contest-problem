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
    vector<double>v(n);
    double sum=0;
    for(int i=0; i<n; i++) 
    {
        cin>>v[i];
        sum+=v[i];
    }
    sort(all(v));
   ll lo=0,hi=1e17;
   ll ans=-1;
   while(lo<=hi)
   {
       ll mid=(lo+hi)/2;
       double av=(sum+mid)/(n*1.0);
       av/=2;
       int n_p=lower_bound(all(v),av)-v.begin();
       if(n_p==n) n_p--;
       if(n_p*2>n)
       {
          ans=mid;
          hi=mid-1;
       }
       else
       {
        lo=mid+1;
       }


   } 
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