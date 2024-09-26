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
    int n,m;
    cin>>n>>m;
    char str[n+3][m+3];
    for(int i=0; i<=n+1; i++)
    {
        str[i][0]='#';
        str[i][m+1]='#';

    }

    for(int i=0; i<=m+1; i++)
    {
        str[0][i]='#';
        str[n+1][i]='#';
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>str[i][j];
        }
    }
    for(int i=0; i<=n+1; i++)
    {
        for(int j=0; j<=m+1; j++) cout<<str[i][j]; cout<<endl;
    }
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}