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
    ll lo=0,hi=2e9+10;
    ll suf=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll tem=(mid*(mid+1))/2;
        if(tem<k)
        {
            suf=mid;
            lo=mid+1;

        }
        else
        {
            hi=mid-1;
        }
    }
    //cout<<suf<<endl;
    ll bad=k-(suf*(suf+1))/2;
    cout<<v[bad]<<endl;

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