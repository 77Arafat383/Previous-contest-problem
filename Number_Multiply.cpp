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

ll binadd(ll a, ll b)
{
    ll ans=0;
    while(b)
    {
        if(b&1)
        {
            ans=(ans+a)%M;

        }
        a=(a+a)%M;
        b>>=1;
    }

    return ans;
}
ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=binadd(ans,a);

        }
        a=binadd(a,a);
        b>>=1;
    }

    return ans;
}


void solve()
{
    string str;
    cin>>str;
    ll k;
    cin>>k;
    ll ans=1;
    for(int i=0; i<str.size(); i++)
    {
        ll dd=str[i]-'0';
        if(dd==0)
        {
            cout<<0<<endl;
            return;
        }
        ans=binadd(ans,dd);
    }
    ll ansi=binex(ans,k);
    cout<<ansi<<endl;

}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}