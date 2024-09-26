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
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b) swap(a,b);
    int cnt=0;
    if(c>d) swap(c,d);
    if(c==a or c==b or d==a or d==b)
    {
        cout<<"YES\n";
        return;
    }
    if(c>a and c<b) cnt++;
    if(d>a and d<b) cnt++;
    if(cnt==1)
    {
        cout<<"YES\n";
        return;

    }
    cout<<"NO\n";
    return;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}