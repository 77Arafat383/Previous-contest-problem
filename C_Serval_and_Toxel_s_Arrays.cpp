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
    ll n,m;
    cin>>n>>m;
    vector<ll>v(n+1),st(n+m+2,-1),len(n+m+2,0);
    for(int i=1;i<=n; i++)
    {
        cin>>v[i];
        st[v[i]]=0;
    }
    
    for(int i=1; i<=m; i++)
    {
        ll p,x;
        cin>>p>>x;
        if(v[p]==x) continue;
        len[v[p]]+=i-st[v[p]];
        st[v[p]]=-1;
        v[p]=x;
        st[v[p]]=i;
    }

    ll total_way=m*(m+1)*n; // if all are different;
    
    for(ll i=0; i<=n+m; i++)
    {
        if(st[i]!=-1) // not yet counted
        {
            len[i]+=m+1-st[i];
        }
        ll similar=len[i]*(len[i]-1)/2;
        total_way-=similar;
    }
    cout<<total_way<<en;
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