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
const int N=1e4;
int n,m;
map<char,int>mp;
string str[N];


ll f(int i, int pos,vector<vector<ll>>&dp)
{
  
   int prv=pos;
    if(i==n)
    {
        return dp[i][pos]= -(pos);
    }
    if(dp[i][pos]!=INT_MIN) return dp[i][pos];

  ll right= f(i+1,pos,dp);
   
    ll score=0;
    for(int j=0; j<m; j++)
    {
        if(mp[str[i][j]]==pos+1)
        {
            pos++;
            if(pos==5)
            {
                
                score+=5;
                pos=0;
            }
            
        }
        else if(mp[str[i][j]]>0)
        {
                score--;
        }
    }
   ll left =f(i+1,pos,dp)+score;
  
    return dp[i][prv]= max(right,left);


}


void solve()
{
    
    cin>>n>>m;
    
    for(int i=0; i<n; i++) cin>>str[i];
   string tem="narek";
   for(int i=0; i<5; i++) mp[tem[i]]=i+1;
    vector<vector<ll>>dp(n+1,vector<ll>(6,INT_MIN));
   ll ans=f(0,0,dp);
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