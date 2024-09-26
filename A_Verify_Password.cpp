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
    int n;
    cin>>n;
    string str;
    cin>>str;
    bool ok=true;
    char pv='0';
    for(int i=0; i<n; i++)
    {
        if(str[i]<pv) ok=false;
        pv=str[i];

    }
    if(ok)
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