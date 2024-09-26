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
    string str;
    cin>>str;
    map<char,int>mp;
    int n=str.size();
    for(int i=0; i<=n/2; i++)
    {
        if(str[i]==str[n-i-1])
        {
            mp[str[i]]++;
        }
    }
    int cnt=0;
    for(auto &it:mp)
    {
        if(it.second>=1)
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}