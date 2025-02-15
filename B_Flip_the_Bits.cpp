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
    string a,b;
    cin>>a>>b;
    map<int,bool>mp;
    int zero=0,one=0;
    for(int i=0; i<n;i++)
    {
        if(a[i]=='0') zero++;
        else one++;
        if(zero==one) mp[i]=true;
    }
    bool ok=true;
    for(int i=n-1; i>=0; i--)
    {
        if(ok)
        {
            if(a[i]!=b[i])
            {
                ok=false;
                if(!mp[i])
                {
                    cout<<"NO\n";
                    return;
                }
            }
        }
        else
        {
            if(a[i]==b[i])
            {
                ok=true;
                if(!mp[i])
                {
                    cout<<"NO\n";
                    return;
                }
            }
        }
    }
    cout<<"YES\n";
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