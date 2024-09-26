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

const int N=1e5+10;
map<string,int>memo;

int dp(string str, vector<string>&v)
{
    if(memo[str]!=0) return memo[str];
    if(str.size()==0)
    {
        
    }

}


void solve()
{
    string str;
    cin>>str;
    int n;
    cin>>n;
    vector<string>v(n);
    
    for(auto &it:v) cin>>it;
    sort(v.rbegin(),v.rend());

}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}