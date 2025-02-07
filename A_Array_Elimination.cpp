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
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    int gc=0;
    for(int k=0; k<30; k++)
    {
        int cnt=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]&(1<<k)) cnt++;
        }
        gc=__gcd(gc,cnt);
    }
    if(!gc)
    {
        for(int i=1;i<=n; i++) cout<<i<<' '; cout<<en;
        return;
    }
    vector<int>ans;
    for(int i=1; i*i<=gc; i++)
    {
        if(gc%i==0) 
        {
            ans.push_back(i);
            if(gc/i!=i) ans.push_back(gc/i);
        }
    }
    sort(all(ans));
    printv(ans);
}
signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}