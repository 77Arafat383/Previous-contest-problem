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
    int n;
    cin>>n;
    vector<ll>v(n);
    for(int i=1; i<=n; i++)
    {
        ll sum=0;
        for(int j=0; j<4; j++)
        {
            ll x;
            cin>>x;
            sum+=x;
        }
        v[i-1]=sum;
    }
   sort(all(v));
    ll tem=v[0];
    int ans=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==tem) ans++;
        else break;
    }
    printv(v);
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}