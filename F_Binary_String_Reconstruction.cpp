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
#define si(x) int(x.size())
const int N=1e5;




void solve()
{
    ll n0,n1,n2;
    cin>>n0>>n1>>n2;
    vector<int>ans;
    for(int i=0; n1 and i<=n1; i++)
    {
        if(i&1) ans.push_back(0);
        else ans.push_back(1);
    }
    bool ok=true,okk=true;
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i];
        if(ans[i]==1 and ok and n2)
        {
            for(int i=0; i<n2; i++) cout<<1;
            ok=false;
        }
        else if(ans[i]==0 and okk and n0)
        {
            for(int i=0; i<n0; i++) cout<<0;
            okk=false;
        }
    }
    if(ok and n2)
    {
         for(int i=0; i<=n2; i++) cout<<1;
            ok=false;
        
    }
    if(okk and n0)
    {
        for(int i=0; i<=n0; i++) cout<<0;
            okk=false;
    }
    cout<<'\n';
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