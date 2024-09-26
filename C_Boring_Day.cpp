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
    ll n,l,r;
    cin>>n>>l>>r;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    int st=0,en=1;
    ll sum=0;
    ll ans=0;
    while(st<=n and en<=n)
    {
       sum+=v[en];
       en++;//already next e chole geche.
       if(sum>=l and sum<=r)
       {
       // cout<<en-1<<endl;
        ans++;
        sum=0;
        st=en;
       }
       else if(sum>r )
       {
          while(sum>r and st<en)
          {
            sum-=v[st];
            st++;
          }
          if(sum>=l and sum<=r)
         {
           // cout<<en-1<<endl;
           ans++;
           sum=0;
           st=en;
         }
         
         
       }
    }
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