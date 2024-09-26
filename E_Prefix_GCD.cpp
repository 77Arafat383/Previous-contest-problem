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
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    sort(all(v));
    
    ll ans=v[1];
    ll p_gc=v[1];
    ll cur_gc=v[1];
    ll baki=n-1;
    while(baki>0)
    {
        for(int i=1; i<=n; i++)
        {
            cur_gc=min(cur_gc,__gcd(p_gc,v[i]));
        }
        if(cur_gc!=p_gc)
        {
            p_gc=cur_gc;
            ans+=cur_gc;
        }
        else
        {
            ans+=baki*cur_gc;
            break;
        }
        baki--;
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