//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define endline '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endline
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endline
#define printmv(a) for(auto [x,v]:a) {cout<<x<<endline; printv(v);}
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    if(n==k)
    {
        for(int i=1; i<n; i+=2)
        {
            if(v[i]!=i/2+1)
            {
                cout<<i/2+1<<endline;
                return;
            }
        }
        cout<<n/2+1<<endline;
        return;
    }
   
    int li=2,hi=n-(k-2);
    for(int i=li-1; i<hi; i++)
    {
        if(v[i]!=1)
        {
            cout<<1<<endline;
            return;
        }
    }
    cout<<2<<endline;
  
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