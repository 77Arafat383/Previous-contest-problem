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



const int N=1e6+10;
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

bool check(ll num, ll a, ll b)
{
    while(num)
    {
        ll rem=num%10;
        num/=10;
        if(rem!=a and rem!=b) return 0;

    }
    return 1;
}

void solve()
{
    ll a,b,n;
    cin>>a>>b>>n;
    ll ans=0;
    for(ll x=0; x<=n; x++)
    {
        ll y=n-x;
        ll num=(x*a+y*b);
       // cout<<x<<" "<<y<<" ";
        if(check(num,a,b))
        {
        //     cout<<x<<" "<<y<<" ";
        //    cout<<num<<endl;
           ll tem=fact[n];
            tem=(tem*1LL*binex(fact[x],M-2))%M;
            tem=(tem*1LL*binex(fact[y],M-2))%M;
            ans=(ans+tem)%M;


        }
       // cout<<num<<endl;
    }
   cout<<ans<<endl;
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