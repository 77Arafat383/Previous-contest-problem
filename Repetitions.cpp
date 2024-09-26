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
    int ans=0;
    int cnt=0;
    int pv=str[0];
    int n=str.size();
    for(int i=0; i<n; i++)
    {
        if(str[i]==pv)
        {
            cnt++;
        }
        else
        {
            cnt=1;
            pv=str[i];
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}