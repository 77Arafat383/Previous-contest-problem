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




void solve()
{
    string a,b;
    cin>>a>>b;
    int n=a.size();
    int m=b.size();
    int dp[n+1][m+1]={0};
    for(int i=0; i<n; i++) dp[i][0]=0;
    for(int i=0; i<m; i++) dp[0][i]=0;
    map<pair<int,int>,pair<int,int>>mp;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i-1]==b[j-1])
            {
                dp[i][j]=dp[i-1][j-1]+1;
                mp[{i,j}]={i-1,j-1};

            } 
            else
            {
                if(dp[i-1][j]>dp[i][j-1])
                {
                    dp[i][j]=dp[i-1][j];
                    mp[{i,j}]={i-1,j};
                }
                else
                {
                    dp[i][j]=dp[i][j-1];
                    mp[{i,j}]={i,j-1};
                }
            }
        }
    }
    cout<<dp[n][m]<<endl;
    int x=n,y=m;
    string ans;
    while(x!=0 and y!=0)
    {
        auto &[px,py]=mp[{x,y}];
        if(px+1==x and py+1==y)
        {
            ans.push_back(a[x-1]);
        }
        x=px,y=py;
    }
    rev(ans);
    cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}