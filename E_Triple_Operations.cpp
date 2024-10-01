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
const int N=2e5+20;
vector<int>v(N,0);

void create()
{
    v[0];
    v[1]=1;
    for(int i=2; i<N; i++)
    {
        v[i]=v[i/3]+1;
    }
    return;
}




void solve()
{
    int l, r;
    cin>>l>>r;
    ll ans=0;
    ans+=v[l];
    for(int i=l; i<=r; i++)
    {
        ans+=v[i];
     
    }
    cout<<ans<<endl;
    
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
create();
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}