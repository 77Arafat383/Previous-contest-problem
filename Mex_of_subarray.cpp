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
    vector<ll>v(n),pos(n+1,-1);
    for(int i=1; i<=n; i++)
    {
        cin>>v[i-1];
        pos[v[i-1]]=i;
    }
    set<ll>seg;
    //initial state.... 
    seg.insert(pos[0]);
    ll ans=n;

    for(int i=1; i<n; i++)
    {
        ll l=*(seg.begin()),r=*(seg.rbegin()),nw=pos[i];
        if(nw<l or nw>r)
        {
            if(nw<l)
            {
                ans+=i*(l-nw)*(n-r+1);
            }
            else 
            {
                ans+=i*l*(nw-r);
            }
            seg.insert(nw);
        }
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