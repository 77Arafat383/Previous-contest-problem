//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e6;
vector<bool>possible(N+2,false);

ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1) ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}
void pre_cal()
{
    for(ll i=2; i<=N; i++)
    {
        ll sum=1+i;
        ll j=2;
        while(sum<=N)
        {
            sum+=(binex(i,j));
            j++;
            if(sum<=N)
              possible[sum]=true;
        }
    }
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
pre_cal();
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    ll x;
    cin>>x;
    Judge(possible[x]);
}
    return 0;
}