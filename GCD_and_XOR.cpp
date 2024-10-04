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
    int gc=0;
    bool ok=true;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
        if(i!=1)
        {
            if(v[i]!=gc) ok=false;
        }
        gc=__gcd(gc,v[i]);

    }
    if(ok)
    {
        cout<<0<<endl;
        return;
    }
    gc=__gcd(gc,k);
    if(gc==k)
    {
        cout<<1<<endl;
        return;
    }
    set<int>s;
    for(int i=1; i<=n; i++)
    {
        s.insert((v[i]^k));
    }
    if(s.size()==1 and *s.begin)
    cout<<2<<endl;
    return;
    
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