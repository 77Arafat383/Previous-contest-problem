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
    vector<int>v(n); for(auto &it:v) cin>>it;
    map<int,int>mp;
    for(int i=0; i<n ; i++)
    {
        mp[v[i]]++;
    }
    int cross=0;
    int ans=0;
    for(auto &it:mp)
    {
        if(cross==it.first) ans+=it.second;
        cross+=it.second;
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