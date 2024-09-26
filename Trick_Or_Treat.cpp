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
const int N=1e5;




void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(n);
    map<int,int>cnt;
   for(int i=0; i<n; i++)
   {
      cin>>a[i];
      a[i]%=m;
   }
   for(int i=0; i<n; i++)
   {
    cin>>b[i];
    b[i]%=m;
    cnt[b[i]]++;
   }
   ll ans=0;
   for(int i=0; i<n; i++)
   {
    int idx=m-a[i];
    if(idx==m) idx=0;
    ans+=cnt[idx];
   }
//    printv(a);
//    printv(b);
cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}