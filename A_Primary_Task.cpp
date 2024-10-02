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
     string str;
     cin>>str;
     if(str.size()>=3)
     {
        if(str[0]=='1' and str[1]=='0')
     {
        if(str[2]=='1' and str.size()>3)
        {
            cout<<"YES\n";
            return;

        }
        else if(str[2]!='0' and str[2]!='1')
        {
            cout<<"YES\n";
            return;
        }
        else
        {
            cout<<"NO\n";
            return;

        }
     }
     }
     cout<<"NO\n";
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