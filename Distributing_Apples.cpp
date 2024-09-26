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
const int N=1e7+10;
ll fact[N];

ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}
void facto()
{
    fact[0]=1;
   
    for(int i=1; i<=N; i++)
    {
        fact[i]=(fact[i-1]*1LL*i)%M;
       

    }
    return;


}

ll binoco(ll n,ll r)
{
    
    ll deno=(fact[r]*1LL*fact[n-r])%M;
    deno=binex(deno,M-2);
    ll ans=(fact[n]*1LL*deno)%M;
    return ans;
}


void solve()
{
   ll n,m;
   cin>>n>>m;
   cout<<binoco(n+m-1,n-1)<<endl;

}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
 facto();

int t;
t=1;
w(t) solve();
    return 0;
}