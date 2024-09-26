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
    ll a,b;
    cin>>a>>b;
  
  set<ll>sa,sb,ans;
    for(int i=1; i*i<=a; i++)
    {
        if(a%i==0)
        {
           sa.insert(i);
           sa.insert(a/i);

        }
    }

    for(int i=1; i*i<=b; i++)
    {
        if(b%i==0)
        {
           sb.insert(i);
           sb.insert(b/i);

        }
    }
   
    for(auto &it:sa)
    {
        for(auto &bt:sb)
        {
            ans.insert(it*bt);
        }
    }
    cout<<ans.size()<<endl;
    }


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}