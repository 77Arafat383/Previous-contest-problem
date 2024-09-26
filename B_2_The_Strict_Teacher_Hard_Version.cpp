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
    int n,m,q;
    cin>>n>>m>>q;
    vector<int>v(m);
    for(auto &it:v) cin>>it;
    sort(all(v));
    w(q)
    {
        int target;
        cin>>target;
        int pos=lower_bound(all(v),target)-v.begin();
        if(pos!=m and v[pos]==target)
        {
            cout<<0<<endl;
        }
        else if(pos==0)
        {
            cout<<v[0]-1<<endl;
        }
        else if(pos==m)
        {
            cout<<n-v[m-1]<<endl;
        }
        else
        {
            cout<<(v[pos]-v[pos-1])/2<<endl;
        }
    }
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