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
int cost(int x,int y, int a, int b)
{
    return (x==y)+(a==b);
}
void solve()
{
    int n;
    cin>>n;
    vector<int>v(n+1);
    for(int i=1; i<=n;i++) cin>>v[i];

    int i=(n+1)/2;
    int j=i;
    if(!(n&1)) j++;
    while(i>0 and j<=n)
    {
        if(cost(v[i],v[i+1],v[j],v[j-1])>cost(v[i],v[j-1],v[i+1],v[j]))
        {
            swap(v[i],v[j]);
        }
        i--;
        j++;
    }
    int ans=0;
    for(int i=1; i<n;i++) ans+=(v[i]==v[i+1]);
    cout<<ans<<en;
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