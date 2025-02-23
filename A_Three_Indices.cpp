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
    ll n;
    cin>>n;
    vector<int>v(n),tract(n);
    for(auto &it:v) cin>>it;
    int pv=n+1;
    for(int i=0; i<n; i++)
    {
        if(v[i]<pv) tract[i]=0;
        else tract[i]=1;
        pv=v[i];
    }
    vector<int>ans;
    for(int i=n-1; i>=2; i--)
    {
        if(tract[i]==0 and tract[i-1]==1)
        {
            ans.push_back(i-1);
            ans.push_back(i);
            ans.push_back(i+1);
            break;
        }
    }
    if(ans.empty())
    {
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
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