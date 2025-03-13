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
    int n;
    cin>>n;
    vector<string>grid(3);
    for(auto &it:grid) cin>>it;
    int cnt=0;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(grid[i][j]=='1') cnt++;
        }
    }
    if(cnt%n!=0)
    {
        cout<<-1<<nxt;
        return;
    }
    if(cnt==0 or cnt==3*n)
    {
        cout<<0<<'\n';
        return;
    }
    if(cnt==min(cnt,3*n-cnt))
    {
        int mx=0;
        int cnt1=0;
        for(int i=0; i<3; i++)
        {
            cnt1=0;
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]=='1') cnt1++;
            }
            mx=max(mx,cnt1);
        }
        cout<<n-mx<<nxt;
        return;
    }
    else
    {
        int mx=0;
        int cnt1=0;
        for(int i=0; i<3; i++)
        {
            cnt1=0;
            for(int j=0; j<n; j++)
            {
                if(grid[i][j]=='0') cnt1++;
            }
            mx=max(mx,cnt1);
        }
        cout<<n-mx<<nxt;
        return;
    }

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