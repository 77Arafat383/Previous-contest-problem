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

ll binex(ll a, ll b)
{
    ll dd=a%M;
    ll ans=1;
    while(b>0)
    {
        if(b&1)
        {
            ans=(ans*1LL*a%M)%M;
        }
        a=(a*a%M)%M;
        b>>=1;
    }
    return ans;
}


void solve()
{
    ll a,b,c;
    cin>>a>>b>>c;
    ll ans=binex(b,c);
    cout<<ans<<endl;
    ans=binex(a,ans);
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