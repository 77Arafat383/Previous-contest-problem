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
const int N=4e4;

bool is_palindrom(int i)
{
    string str,tem=to_string(i);
    str=tem;
    rev(str);
    return (str==tem);
}


void solve()
{
    vector<ll>v;
    for(int i=1; i<=N; i++)
    {
        if(is_palindrom(i)) v.push_back(i);
    }

    vector<ll>dp(1e5,0);
    dp[0]=1;
    
    for(auto &x:v)
    {
        for(int i=0; i<=N; i++)
        {
            dp[i+x]=(dp[i+x]+dp[i])%M;
        }
    }

    int q;
    cin>>q;
    w(q)
    {
        ll n;
        cin>>n;
        cout<<dp[n]<<en;
    }
}




signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}