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




void solve()
{
    int n,k;
    cin>>n>>k;
    char v[n+2][n+2];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++) cin>>v[i][j];
    }


    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++) cout<<v[i][j]; cout<<endl;
    // }
   
    vector<vector<char>>ans;
    for(int i=1; i<=n; i+=k)
    {
        vector<char>tem;
        for(int j=1; j<=n; j+=k)
        {
            tem.push_back(v[i][j]);


        }
        ans.push_back(tem);
    }
    for(int i=0; i<n/k; i++)
    {
        for(int j=0; j<n/k; j++) cout<<ans[i][j]; cout<<endl;
    }
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