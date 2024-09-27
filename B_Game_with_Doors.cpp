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
    int l1,r1,l2,r2;
    cin>>l1>>r1>>l2>>r2;
    if(r1<l2 or r2<l1)
    {
        cout<<1<<endl;
        return;
    }
    int lo,hi,clo,chi;
    lo=min(l1,l2),hi=max(r1,r2);
    clo=max(l1,l2),chi=min(r1,r2);
    int ans=chi-clo;
    if(lo!=clo) ans++;
    if(hi!=chi) ans++;
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