//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vector<pair<int,pair<int,int>>>v;
    vector<int>ans(n);
    for(int i=0; i<n; i++)
    {
        int l,r;
        cin>>l>>r;
        v.push_back({l,{r,i}});
    }
    sort(all(v));
    int right=v[0].second.first;
    bool ok=false;
    for(int i=0; i<n; i++)
    {
        if(v[i].first>right)
        {
            ok=true;
        }
        else
        {
            right=max(right,v[i].second.first);
        }
        if(ok)
        {
            ans[v[i].second.second]=2;
        }
        else
        {
            ans[v[i].second.second]=1;
        }
    }
    if(!ok)
    {
        cout<<-1<<'\n';
        return;
    }
    printv(ans);
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