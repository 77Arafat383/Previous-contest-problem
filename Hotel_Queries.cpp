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
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(auto &it:v ) cin>>it;
   // printv(v);
    w(q)
    {
        int x;
        cin>>x;
        auto it=lower_bound(all(v),x);
        if(it==v.end())
        {
            cout<<0<<" ";
        }
        else
        {
            cout<<it-v.begin()+1<<" ";
           *it-=x;
        }
    }
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}