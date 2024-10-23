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
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    ll sum=0;
    for(auto &it:v)
    {
        cin>>it;
        sum+=it;
    }
    ll mx=*max_element(all(v));  //for maximum value we need at least maximum time of iteration. 
    //if we select as x item for each round. 
    ll dd=(sum+(x-1))/x;  //here we add x-1 for avoiding remainder.. 
    cout<<max(mx,dd)<<endl;
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