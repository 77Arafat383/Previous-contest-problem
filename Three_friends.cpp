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
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b and a<c) or (a>c and a<b))
    {
        cout<<'A'<<endl;
        return;
    }
    else if((b>a and b<c) or (b<a and b>c))
    {
        cout<<"B"<<endl;
        return;
    }
    cout<<"C"<<endl;
    return;
 }


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}