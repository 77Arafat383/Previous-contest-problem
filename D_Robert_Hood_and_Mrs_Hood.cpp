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
    int n,d,q;
    cin>>n>>d>>q;
    vector<int>v(n+5,0);
    w(q)
    {
         int l,r;
         cin>>l>>r;
         l=max(1,l-d+1);
         v[l]++;
         v[r+1]--;
    }
    for(int i=1; i<=n+1; i++) 
    {
        v[i]+=v[i-1];
    }
 // printv(v);
    int i=max_element(v.begin()+1,v.begin()+n-d+2)-v.begin();
    cout<<i<<" ";
    int j=min_element(v.begin()+1,v.begin()+n-d+2)-v.begin();
    cout<<j<<endl;
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