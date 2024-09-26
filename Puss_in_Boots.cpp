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
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    vector<ll>a,b,c;
    for(int i=1; i<=n; i+=3)
    {
        a.push_back(v[i]);
        if(i+1<=n) b.push_back(v[i+1]);
        if(i+2<=n) c.push_back(v[i+2]);
    }
    sort(all(a));
    sort(all(b));
    sort(all(c));
    
    
   for(int i=1,j=0; i<=n; i+=3,j++)
   {
       v[i]=a[j];
       if(j<b.size())
       v[i+1]=b[j];
       if(j<c.size())
       v[i+2]=c[j];
   }
  for(int i=1; i<=n; i++)
  {
    if(v[i-1]>v[i])
    {
        cout<<"NO\n";
        return;
    }
  }
  cout<<"YES\n";
  return;
}


int main()
{
int t;
cin>>t;
while(t--)
{
    solve();
}
    return 0;
}