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
    string str;
    cin>>str;
    int cnt=0;
    for(int i=0; i<n-m+1; i++)
    {
        int j=i+m-1;
        map<char,int>mp;
        for(int k=i; k<=j; k++)
        {
            mp[str[k]]++;
        }
        int odd=0;
        for(auto &[x,y]:mp) 
        {
            if(y&1) odd++;
        }
        if(m%2==0 and odd>0)
        {
            cnt++;
        }
        else if(m&1 and odd>1)
        {
            cnt++;
        }


    }
    cout<<cnt<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}