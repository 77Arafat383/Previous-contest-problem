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
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<en
#define printmv(a) for(auto [x,v]:a) cout<<x<<en, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n);
    int last_pos=-1,last_neg=-1;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        if(v[i]>0) last_pos=i;
        if(v[i]<0) last_neg=i;
    }
    if(last_pos==-1 and last_neg==-1)
    {
        cout<<0<<en;
        return;
    }
    vector<pair<int,int>>ans;
    if(last_pos!=-1)
    {
        for(int i=0; i<10; i++) ans.push_back({last_pos,last_pos});
        ans.push_back({0,last_pos});
        for(int i=1; i<n; i++)
        {
            ans.push_back({i,i-1});
            ans.push_back({i,i-1});
        }
    }
    else
    {
        for(int i=0; i<10; i++) ans.push_back({last_neg,last_neg});
        ans.push_back({n-1,last_neg});
        for(int i=n-2; i>=0; i--)
        {
            ans.push_back({i,i+1});
            ans.push_back({i,i+1});
        }
    }
    cout<<ans.size()<<en;
    for(auto &[x,y]:ans) cout<<x+1<<' '<<y+1<<en;
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