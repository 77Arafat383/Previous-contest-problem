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
    string tem;
    set<char>s;
    for(auto &it:str) s.insert(it);
   // printv(s);
    for(auto &it:s) tem.push_back(it);
    map<char,char>mp;
    for(int i=0; i<s.size(); i++)
    {
        mp[tem[i]]=tem[s.size()-1-i];
    }
    for(int i=0; i<n; i++)
    {
        str[i]=mp[str[i]];
    }
   cout<<str<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}