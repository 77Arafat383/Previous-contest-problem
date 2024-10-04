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


ll Dp(ll idx,ll n, ll need,vector<pair<ll,ll>>&v, vector<vector<ll>>&dp)
{
    if(need==0)
    {
        return 0;
    }
    if(idx==n)
    {
         return INT_MAX;
    }

    if(dp[idx][need]!=-1) return dp[idx][need];

    ll dorkar=need;
    // not take.
    ll not_take=Dp(idx+1,n, need,v,dp); 
    ll khaichi=0;
    ll take=INT_MAX;
    auto &[x,y]=v[idx];
    if(need>=(x+y))
    {
        take=x*y;
        khaichi=x+y;

    }
    else
    {

        ll mx=max(x,y);
        ll mn=min(x,y);
        ll dif=mx-mn;
        if(need<=dif)
        {
            take=need*mn;
        }
        else
        {
            take=(dif+1)*mn;
            need-=(dif+1);
           
            while(need)
            {
                need--;
                mn--;
                take+=mn;
                if(need)
                {
                    
                    take+=mn;
                    need--;
                }

            }
        }
        khaichi=need;
    }
   ll nichi = Dp(idx+1,n,need-khaichi,v,dp)+take;
  // cout<<idx<<" "<<dorkar<<" "<<min(nichi,not_take)<<endl;
    return dp[idx][dorkar]=min(nichi,not_take);

}

bool ch(pair<int,int>a, pair<int,int>b)
{
    return (min(a.first,a.second)<=min(b.first,b.second));

}
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>v;
    for(int i=1; i<=n; i++)
    {
        ll x,y;
        cin>>x>>y;
        v.push_back({x,y});
    }
   sort(all(v),ch);

//    for(int i=0; i<n; i++)
//    {
//       auto &[x,y]=v[i];
//       cout<<x<<" "<<y<<endl;
//    }
   
    vector<vector<ll>>dp(n+4,vector<ll>(k+4,-1));

    ll ans=Dp(0,n,k,v,dp);
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;
    
}


signed main()
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