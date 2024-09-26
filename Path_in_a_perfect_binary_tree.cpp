//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl




void solve()
{
    ll a,b;
    cin>>a>>b;
    vector<ll>ans1,ans2;
    while(a!=b)
    {
       
        if(a>b)
        {
            ans1.push_back(a);
            a/=2;
        }
        else if(b>a)
        {
             ans2.push_back(b);
             b/=2;
        }
    }
    ans1.push_back(a);
    rev(ans2);
    for(int i=0; i<ans2.size(); i++) ans1.push_back(ans2[i]);
    printv(ans1);
}

int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}