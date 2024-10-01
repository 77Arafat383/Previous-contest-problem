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
const int N=2e5+20;
vector<ll>fact(N+2,0);



ll binmul(ll a, ll b)
{
    return (a*b)%M;
}

void create()
{
    fact[0]=1;
    for(int i=1; i<N; i++)
    {
        fact[i]=binmul(i,fact[i-1]);

    }

    return;
}

ll binex(ll a,ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=binmul(ans,a);
        }
        a=binmul(a,a);
        b>>=1;
    }

    return ans;
}

ll inverse(ll a)
{
    return binex(a, M-2);

}
ll bindiv(ll a, ll b)
{
    return binmul(a,inverse(b));
}

ll nCr(ll n, ll r)
{
    if(n<r) return 0;
    return bindiv(fact[n],binmul(fact[r],fact[n-r]));
}
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll n0=0,n1=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x==0) n0++;
        else n1++;
    }

    ll mn1=(k+1)/2;
    ll mx0=k/2;

    ll ans=0;
    while(mn1<=n1 and mn1<=k)
    {
        ll a=nCr(n1,mn1);
        mn1++;
        ll b=1;
        if(mx0>0)
        {
            b=nCr(n0,mx0);
            mx0--;
        }

        ans=(ans+(a*b)%M)%M;

    }
    cout<<ans<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;

create();
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}