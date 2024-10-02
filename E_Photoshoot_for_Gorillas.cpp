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
    int n,m,k;
    cin>>n>>m>>k;
    int ng;
    cin>>ng;
    vector<ll>v(ng);
    for(auto &it:v) cin>>it;
    sort(v.rbegin(),v.rend());
    ll arr[n+5][m+5];
    for(int i=0; i<n+5; i++)
    {
        for(int j=0; j<m+5; j++) arr[i][j]=0;
    }
     // findin frequency.. 
    for(int i=1; i<=n-k+1; i++)
    {
        for(int j=1; j<=m-k+1; j++)
        {
            arr[i][j]+=1;
            if(i+k<=n)
            {
                arr[i+k][j]-=1;
            }
            if(j+k<=m)
            {
                arr[i][j+k]-=1;
            }
            if(i+k<=n and j+k<=m)
            {
                arr[i+k][j+k]+=1;
            }
        }
    }

    // calculating prefix sum.
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            arr[i][j]+=(arr[i-1][j]+arr[i][j-1]-arr[i-1][j-1]);
        }
    }
    vector<ll>vv;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) vv.push_back(arr[i][j]);
    }

    sort(vv.rbegin(),vv.rend());
    
    ll ans=0;
    for(int i=0; i<min(vv.size(),v.size()); i++)
    {
        ans+=vv[i]*v[i];
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