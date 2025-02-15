//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n),vis(n+1,false);
    for(auto &it:v) cin>>it;
    int idx=-1;
    int target=n;
    for(int i=0; i<n; i++)
    {
        if(v[i]==target)
        {
            idx=i;
            if(idx==0) target--;
            if(v[i]==target) break;
        }
    }

    for(int i=idx; i<n; i++) 
    {
        cout<<v[i]<<' ';
        vis[v[i]]=true;
    }
    if(idx!=n-1 and idx!=0)
    {
        idx--;
        cout<<v[idx]<<' ';
        vis[v[idx]]=true;
    }
    if(idx!=0)
       idx--;
    while(idx>=0 and v[idx]>v[0] )
    {
        cout<<v[idx]<<' ';
        vis[v[idx]]=true;
        idx--;
    }
    for(int i=0; i<=idx; i++) 
    {
        if(!vis[v[i]]) cout<<v[i]<<' '; 
    }
    cout<<en;
    // cout<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}