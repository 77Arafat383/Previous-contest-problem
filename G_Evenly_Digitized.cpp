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
const int N=1e6+2;
vector<ll>v(N);



void create()
{

    ll dd=1;
    ll ans=0;
    for(int i=1; i<N; i++)
    {
       if(i==1)
       {
        ans=(ans+5)%M;
        dd=4LL;
       }
       else
       {
          dd=(dd*1LL*5)%M;
          ans=(ans+dd)%M;
       }
       v[i]=ans;
       
    }
   // cout<<ans<<endl;
}

void solve()
{
    ll l, r;
    cin>>l>>r;
    cout<<(v[r]-v[l-1]+M)%M<<endl;

}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
create();
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}