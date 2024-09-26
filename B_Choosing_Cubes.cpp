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
    int n,f,k;
    cin>>n>>f>>k;
    vector<int>a(n+1);
   for(int i=1; i<=n; i++) cin>>a[i];
   int value=a[f];
   sort(all(a));
   rev(a);
   vector<int>idx;
   for(int i=0; i<n; i++)
   {
      if(a[i]==value) idx.push_back(i+1);
   }

   if(idx[0]>k)
   {
    cout<<"NO\n";
    return;
   }
   if(idx.back()<=k)
   {
    cout<<"YES\n";
    return;
   }
   
    cout<<"MAYBE\n";
    return;


}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}