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
    vector<ll>v(n);
    for(auto &it:v)  cin>>it;
    string str;
    cin>>str;
    for(int i=1; i<n; i++) v[i]+=v[i-1];
    int st=0,en=n-1;
    ll ans=0;
    while(st<en)
    {
        while(str[st]!='L' and st<en) st++;
        while(str[en]!='R' and en>st) en--;
        if(st>=en) break;


        if(st==0)
        {
            ans+=(1LL*(v[en]));
         
        }
        else
        {
            ans+=(1LL*(v[en]-v[st-1]));
          
        }
        st++;
        en--;
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