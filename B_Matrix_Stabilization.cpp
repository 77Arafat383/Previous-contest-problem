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




void solve()
{
    int n,m;
    cin>>n>>m;
    int arr[n+1][m+1];
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            vector<int>v(4);
            if(i-1>=1)
            {
                v[0]=arr[i-1][j];
            }
            if(i+1<=n)
            {
                v[1]=arr[i+1][j];
            }
            if(j-1>=1)
            {
                v[2]=arr[i][j-1];
            }
            if(j+1<=m)
            {
                v[3]=arr[i][j+1];
            }
            sort(all(v));
            if(arr[i][j]>v[3]) arr[i][j]=v[3];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}