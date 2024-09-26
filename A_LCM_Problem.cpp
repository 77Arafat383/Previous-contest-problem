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
    ll l,r;
    cin>>l>>r;
    if(l*2>r)
    {
        cout<<"-1 -1\n";
        return;
    }
    cout<<l<<" "<<l*2<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}