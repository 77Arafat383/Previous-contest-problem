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

ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }

    return ans;
}


void solve()
{
    int n;
    cin>>n;
    vector<ll>v(n+1);
    for(int i=1;i<=n;i++)   cin>>v[i];
    ll sum=0;
    ll total=0;
    sum+=v[n];
    
    for(int i=n-1; i>=1; i--)
    {
        ll tem=(sum*v[i])%M;
        total=(total+tem)%M;
        sum=(sum+v[i])%M;
    }

    ll deno=n-1;
    deno=(deno*n)%M;
    deno=(deno*binex(2,M-2))%M;
    deno=binex(deno,M-2);
    ll ans=(total*deno)%M;
    cout<<ans<<endl;

}   


int main()
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