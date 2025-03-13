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
    string str;
    cin>>str;
    int x;
    cin>>x;
    int n=str.size();
    vector<int>v(n,1);
    for(int i=0; i<n; i++)
    {
        if(str[i]=='0')
        {
            if(i-x>=0)
            {
                v[i-x]=0;
            }
            if(i+x<n)
            {
                v[i+x]=0;
            }
        }
    }
    bool ok=true;

    for(int i=0; i<n; i++)
    {
        if(str[i]=='1')
        {
            if((i+x<n and v[i+x]!=0) or (i-x>=0 and v[i-x]!=0))
            {
               continue;
            }
            ok=false;
        }
    }
    if(!ok)
    {
        cout<<"-1\n";
        return;
    }
    for(int i=0; i<n; i++) cout<<v[i]; cout<<'\n';
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