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
    int n,q;
    cin>>n>>q;
    ll arr[n+10][n+10];
    for(int i=0; i<=n; i++)
    {
        arr[i][0]=0;
        arr[0][i]=0;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            char ch;
            cin>>ch;
            if(ch=='*') arr[i][j]=1;
            else arr[i][j]=0;
        }
    }
    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++) cout<<arr[i][j]<<" "; cout<<endl;
    // }
    // cout<<endl;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            arr[i][j]+=arr[i][j-1];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            arr[i][j]+=arr[i-1][j];
        }
    }

    // for(int i=1; i<=n; i++)
    // {
    //     for(int j=1; j<=n; j++) cout<<arr[i][j]<<" "; cout<<endl;
    // }

    w(q)
    {
        int x1,x2,y1,y2;
        cin>>x1>>y1>>x2>>y2;
        ll ans=arr[x2][y2]-arr[x1-1][y2]-arr[x2][y1-1]+arr[x1-1][y1-1];
       cout<<ans<<endl;
        //  cout<<arr[x2][y2]<<endl;
        //  cout<<arr[x1-1][y2]<<endl;
        //  cout<<arr[x2][y1-1]<<endl;
        //  cout<<arr[x1-1][y1-1]<<endl;
        //  cout<<endl;

    }
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}