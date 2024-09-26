//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;




void solve()
{
    string str,tem="SONAMONIDERPROGRAMMINGADDA";
    cin>>str;
    map<char,int>mp,need;
    for(int i=0;i<tem.size(); i++) need[tem[i]]++;
    for(int i=0; i<str.size(); i++) mp[str[i]]++;
    for(auto &it:need) 
    {
        if(mp[it.first]!=it.second)
        {
            cout<<"no\n";
            return;
        }
    }

    for(auto &it:mp) 
    {
        if(need[it.first]!=it.second)
        {
            cout<<"no\n";
            return;
        }
    }
    cout<<"yes\n";
    return;

}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}