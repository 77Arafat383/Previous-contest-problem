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
    int n,m;
    cin>>n>>m;
    string str;
    cin>>str;
    vector<int>arr(7,0);
    for(int i=0; i<str.size(); i++)
    {
        arr[str[i]-'A']++;
    }
    int ans=0;
    for(int i=0; i<7; i++)
    {
        if(arr[i]<m) ans+=m-arr[i];
    }
    cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}