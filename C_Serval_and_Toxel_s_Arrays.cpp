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
    int n,m; cin>>n>>m;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
    }
    vector<vector<int>>vv(m+1,vector<int>());
    vv[0]=v;
    for(int i=1;i<=m;i++)
    {
        int idx,val; cin>>idx>>val;
        vv[i]=vv[i-1];
        vv[i][idx]=val;
    }
    int ans=0;
    for(int i=0; i<m; i++)
    {
        for(int j=i+1; j<m+1; j++)
        {
            unordered_set<int>s;
            for(int k=1; k<=n; k++) s.insert(vv[i][k]);
            for(int k=1; k<=n; k++) s.insert(vv[j][k]);
            ans+=s.size();

        }
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