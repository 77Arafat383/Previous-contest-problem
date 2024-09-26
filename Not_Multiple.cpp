//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<"asce\n";
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
    ll a, n, l, r;
    cin>>a>>n>>l>>r;
    ll rem=l%a;
    rem=a-rem;
    l+=rem;

    if(rem>n and l<=r)
    {
        check;
        ll ans=l+n-1;
        cout<<ans<<endl;
        return;
    }
    else if(rem>n and l+n>r)
    {
        cout<<"-1\n";
        return;
    }
    else
    {
        n-=rem;
    }
    // cout<<l<<endl;
    // cout<<n<<endl;
   l++;
   while(1)
   {
      ll lagbe=n/a;
      n=lagbe;
      l+=lagbe*a;
      if(l>r or l+n>r)
      {
        cout<<"-1\n";
        return;
      }
      if(l+n<=r and l+n<l+a-1)
      {
        cout<<l+n<<endl;
        return;
      }
   }

}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++)
{
   // cout<<i<<endl;
    solve();
}
    return 0;
}