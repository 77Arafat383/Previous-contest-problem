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
const int N=1e5;
// int f(int i, int j,vector<vector<int>>&grid,char ch,int n)
// {  
//     if(n==0)
//     {
        
//         if(grid[i][j]==-1)
//         {
//             grid[i][j]=1;
//             return 1;
//         }
//         return 0;
//     }
//     int ans=0;
//     if(ch!='L')
//     {
//       ans+=  f(i,j+1,grid,'L',n-1);
//       ans+=  f(i,j-1,grid,'L',n-1);
//     }
//     if(ch!='D')
//     {
//       ans+=  f(i+1,j,grid,'D',n-1);
//       ans+=  f(i-1,j,grid,'D',n-1);
//     }
//     return ans;
// }
void solve()
{
   ll n;
    cin>>n;
    // vector<vector<int>>grid(2002,vector<int>(2002,-1));
    // int i=1001,j=1001;
    // int ans=f(i,j,grid,'k',n);
   

    // // for(int i=0; i<2002; i++)
    // // {
    // //     for(int j=0; j<2002; j++)
    // //     {
    // //         if(grid[i][j]) ans++;
    // //     }
    // // }
    // cout<<ans<<en;
    ll ans=0;
    if(n&1)
    {
        n+=1;
        n/=2;
        ans=n*(n+1)*2LL;
    }
    else
    {
        n/=2LL;
        n++;
        ans=n*n;
    }
    cout<<ans<<en;
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}