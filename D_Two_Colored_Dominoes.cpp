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
    ll h,w;
    cin>>h>>w;
    vector<string>grid(h);
    for(auto &it:grid) cin>>it;

    for(int i=0; i<h; i++)
    {
        int cnt=0;
        for(int j=0; j<w; j++)
        {
            if(grid[i][j]!='.') cnt++;
        }
        if(cnt&1)
        {
            cout<<"-1\n";
            return;
        }
    }

    for(int j=0; j<w; j++)
    {
        int cnt=0;
        for(int i=0; i<h; i++)
        {
            if(grid[i][j]!='.') cnt++;
        }
        if(cnt&1)
        {
            cout<<"-1\n";
            return;
        }
    }

    for(int i=0; i+1<h; i++)
    {
        vector<int>tem;
        for(int j=0; j<w; j++)
        {
            if(grid[i][j]=='U' and grid[i+1][j]=='D') tem.push_back(j);
        }
        for(int k=0; k<tem.size(); k++)
        {
            int j=tem[k];
            if(k&1)
            {
                grid[i][j]='B';
                grid[i+1][j]='W';
            }
            else
            {
                grid[i][j]='W';
                grid[i+1][j]='B';

            }
        }
    }

    for(int j=0; j+1<w; j++)
    {
        vector<int>tem;
        for(int i=0; i<h; i++)
        {
            if(grid[i][j]=='L' and grid[i][j+1]=='R') tem.push_back(i);
        }
        for(int k=0; k<tem.size(); k++)
        {
            int i=tem[k];
            if(k&1)
            {
                grid[i][j]='W';
                grid[i][j+1]='B';
            }
            else
            {
                grid[i][j]='B';
                grid[i][j+1]='W';
            }
        }
    }

    for(int i=0; i<h; i++) cout<<grid[i]<<en;
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