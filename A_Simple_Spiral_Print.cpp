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
//const int N=1e5;

void solve()
{
    ll n;
    cin>>n;
    vector<vector<int>>grid(2*n-1,vector<int>(2*n-1,0));

    int cnt=0;

    for(int i=0; i<n; i++)
    {
        grid[n-i-1][n-1]=cnt++;
        if(i>0) grid[n-1][n-1+i]=cnt++;
        grid[n-1+i][n-1]=cnt++;
        if(i>0) grid[n-1][n-1-i]=cnt++;
    }

    for(int i=0; i<2*n-1; i++)
    {
        for(int j=0; j<2*n-1; j++)
        {
            cout<<grid[i][j]<<' ';
        }
        cout<<en;
    }
}



signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}