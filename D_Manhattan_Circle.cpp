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
   char ch;
    vector<pair<int,int>>v;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++) 
        {
            cin>>ch;
            if(ch=='#') v.push_back({i,j});

        }
    }
    int d=v.size()/2;
    cout<<v[d].first<<" "<<v[d].second<<endl;
    
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}