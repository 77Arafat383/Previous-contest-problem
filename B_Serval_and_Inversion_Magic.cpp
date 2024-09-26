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
    bool ok=false;
    int cnt=0;
    for(int i=0; i<n/2; i++)
    {
        if(str[i]!=str[n-i-1] and !ok)
        {
            ok=true;
            cnt++;
        }
        else if(str[i]==str[n-i-1])
        {
            ok=false;
        }
    }
    if(cnt>1)
    {
        cout<<"No\n";
        return;
    }
    cout<<"Yes\n";
    return;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}