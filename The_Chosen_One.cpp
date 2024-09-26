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
    int n;
    cin>>n;
    vector<ll>v(n+2),suf(n+3),pre(n+3);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    for(int i=1; i<=n; i++)
    {
        pre[i]=__gcd(v[i],pre[i-1]);
    }
    for(int i=n; i>=1; i--)
    {
        suf[i]=__gcd(v[i],suf[i+1]);
    }
   
  
    
    for(int i=1; i<=n; i++)
    {
        ll gc=__gcd(pre[i-1],suf[i+1]);
        
        if(v[i]%gc!=0)
        {
            cout<<gc<<endl;

          return;
        }
    }
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}