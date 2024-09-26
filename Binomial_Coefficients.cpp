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
void facto()
{
    fact[0]=1;
    for(int i=1;i<=N; i++)
    {
        fact[i]=(fact[i-1]*1LL*i)%M;
    }
}
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

    ll a,b;
    cin>>a>>b;
    ll fa=fact[a];
    ll fb=fact[b];
    ll fab=fact[a-b];
    ll deno=(fb*1LL*fab)%M;
    deno=binex(deno,M-2);
    ll ans=(deno*1LL*fa)%M;
    cout<<ans<<endl;


}



int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
facto();

int t;
cin>>t;
w(t) solve();
    return 0;
}