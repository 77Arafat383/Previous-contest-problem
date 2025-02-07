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


int ultimate_parents(int x, vector<int>&v)
{
    if(v[x]==x) return x;
    return ultimate_parents(v[x],v);
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>v(n+2),sz(n+2);
    for(int i=1; i<=n; i++)
    {
        v[i]=i;
        sz[i]=1;
    }
    while(m--)
    {
        int k;
        cin>>k;
        if(k==0) continue;
        int x;
        cin>>x;
        if(k==1) continue;
        int a=ultimate_parents(x,v);
        for(int i=1; i<k; i++)
        {
            int y;
            cin>>y;
            int b=ultimate_parents(y,v);

            if(a==b) continue;
            if(sz[a]<sz[b]) swap(a,b);
            v[b]=a;
            sz[a]+=sz[b];
        }
    }
  //  for(int i=1; i<=n; i++) cout<<v[i]<<' '; cout<<en;
    for(int i=1; i<=n; i++)
    {
        int a=ultimate_parents(i,v);
        cout<<sz[a]<<' ';
    }
    cout<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}