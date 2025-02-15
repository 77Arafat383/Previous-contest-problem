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
    string str;
    cin>>str;
    int n=str.size();
    map<char,vector<int>>mp;
    for(int i=0; i<n; i++)
    {
        mp[str[i]].push_back(i);
    }
    int m;
    cin>>m;
    string l,r;
    cin>>l>>r;
   // cout<<str<<' '<<l<<' '<<r<<en;
    int last=-1;
    for(int i=0; i<m; i++)
    {
        int nw=last;
       for(char ch=l[i]; ch<=r[i]; ch++)
       {
       // cout<<ch<<en;
          int idx=upper_bound(all(mp[ch]),last)-mp[ch].begin();
          if(idx==mp[ch].size())
          {
            cout<<"YES\n";
            return;
          }
          nw=max(nw,mp[ch][idx]);
          
       }
      
       last=nw;
    }
    cout<<"NO\n";
    return;
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