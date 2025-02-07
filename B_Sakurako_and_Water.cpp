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
    int n;
    cin>>n;
    vector<vector<int>>v(n+1,vector<int>(n+1,0));
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            cin>>v[i][j];

        }
    }
    int ans=0;
    for(int j=1; j<=n; j++)
    {
        int mn=0;
        int i=1,k=j; 
        while(i<=n and k<=n)
        {
            mn=min(mn,v[i][k]);
            i++;
            k++;
        }
        ans+=abs(mn);
    }
    for(int i=2; i<=n; i++)
    {
        int mn=0;
        int j=1,k=i;
        while(j<=n and k<=n)
        {
            mn=min(mn,v[k][j]);
            j++;
            k++;
        }
        ans+=abs(mn);
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