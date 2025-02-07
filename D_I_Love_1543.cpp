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
    int n,m;
    cin>>n>>m;
    vector<string>grid(n);
    for(int i=0; i<n; i++) cin>>grid[i];
    int ans=0;
    for(int k=0; ; k++)
    {
        int a=k,b=n-1-k,c=k,d=m-1-k;
        if(a>b or c>d) break;
        string str;
        for(int i=c; i<d; i++) str.push_back(grid[a][i]);
        for(int i=a; i<b; i++ ) str.push_back(grid[i][d]);
        for(int i=d; i>c; i--) str.push_back(grid[b][i]);
        for(int i=b; i>a; i--) str.push_back(grid[i][c]);

        for(int i=0; i<3; i++)
        {
            str.push_back(str[i]);
        }

        for(int i=0; i+3<str.size(); i++)
        {
            if(str.substr(i,4)=="1543") ans++;
        }
    }
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