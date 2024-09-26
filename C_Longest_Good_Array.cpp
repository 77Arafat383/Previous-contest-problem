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
    ll l,r;
    cin>>l>>r;
    ll dif=r-l;
    ll lo=0,hi=1e10;
    int ans=0;
    while(lo<=hi)
    {
        ll mid=(lo+hi)/2;
        ll tem=(mid*(mid+1))/2;
        if(tem<=dif)
        {
            ans=mid+1;
            lo=mid+1;

        }
        else
        {
            hi=mid-1;
        }
    }
    cout<<ans<<endl;
}


int main()
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