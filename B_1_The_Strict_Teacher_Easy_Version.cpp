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
    for(int i=0; i<m; i++) cin>>v[i];
    sort(all(v));
    w(q)
    {
        int pos;
        cin>>pos;
        int l=lower_bound(all(v),pos)-v.begin();
        if(v[l]==pos)
        {
           int ans;
           if(l+1<m) ans=v[l+1]-pos;
           if(l-1>=0) ans=min(ans,pos-v[l-1]);
           cout<<ans<<endl;
        }
       else  if(l==0)
        {
            cout<<v[l]-1<<endl;
            continue;
        }
        else if(l==m)
        {
            cout<<n-v[l-1]<<endl;
            continue;
        }
        else
        {
           // check;
            cout<<(v[l]-v[l-1])/2<<endl;
            continue;

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