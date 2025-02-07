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


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    ll n,sum;
    cin>>n>>sum;
    if(n==1 and sum==0)
    {
        cout<<0<<' '<<0<<'\n';
        continue;
    }
    if(n*9LL<sum)
    {
        cout<<"-1 -1\n";
        continue;
    }
    vector<int>v(n);
    for(int i=0; i<n;  i++)
    {
        if(sum>9)
        {
            v[i]=9;
            sum-=9;
        }
        else
        {
            v[i]=sum;
            sum=0;
        }
    }
    string mx;
        for(int i=0; i<n; i++)
        {
            char ch=v[i]+'0';
            mx.push_back(ch);
        }
        string mn;
        int bad=0;
        for(int i=n-1; i>=0; i--)
        {
            if(i==n-1 and v[i]==0)
            {
                bad=1;
                v[i]=1;
            }
            else if(bad and v[i])
            {
                bad=0;
                v[i]--;
                
            }
            char ch=v[i]+'0';
            mn.push_back(ch);
        }
        if(bad)
        {
            cout<<"-1 -1\n";
            continue;
        }
        cout<<mn<<' '<<mx<<en;
}
    return 0;
}