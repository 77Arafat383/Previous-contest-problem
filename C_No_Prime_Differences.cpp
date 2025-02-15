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
    int h,w;
    cin>>h>>w;
    if(h%4==0)
    {
           vector<int>start;
           int j=1; 
           while(j<h*w)
           {
            start.push_back(j);
            j+=h;
           }
           for(int i=0; i<h; i++)
           {
             for(j=0; j<start.size(); j++) cout<<i+start[j]<<' '; cout<<en;
           }
    }
    else if(w%4==0)
    {
        vector<int>start;
        int i=1;
        while(i<h*w)
        {
            start.push_back(i);
            i+=w;
        }
        for(int i=0; i<start.size(); i++)
        {
            for(int j=0; j<w; j++) cout<<start[i]+j<<' '; cout<<en;
        }
    }
    else
    {
        vector<int>start;
        int i=1; 
        while(i<h*w)
        {
            start.push_back(i);
            i+=2*w;
        }
        i=w+1;
        while(i<h*w)
        {
            start.push_back(i);
            i+=2*w;
        }
        for(int i=0; i<start.size(); i++)
        {
            for(int j=0; j<w; j++) cout<<start[i]+j<<' '; cout<<en;
        }
    }
    cout<<en;
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