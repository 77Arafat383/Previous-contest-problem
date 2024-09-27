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
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    sort(all(v));
    for(int i=n; i>=1; i-=2)
    {
        int dif=v[i]-v[i-1];
        if(dif>=k and k>0)
        {
            v[i-1]+=k;
            k=0;
        }
        else if(k>0)
        {
            v[i-1]=v[i];
            k-=dif;
        }

    }
    ll suma=0,sumb=0;
    for(int i=1; i<=n; i++)
    {
        if(i&1) suma+=v[n-i+1];
        else sumb+=v[n-i+1];
    }
    cout<<suma-sumb<<endl;
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