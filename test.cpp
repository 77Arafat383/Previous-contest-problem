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

map<pair<int,int>,int>mp;


void solve()
{
    
    for(int i=1; i<=10; i++)
    {
        mp[{i,i+2}]=i+1;
    }
    cout<<mp[{2,4}]<<endl;
    cout<<mp[{5,7}]<<endl;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}