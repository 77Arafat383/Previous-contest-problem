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
    int n,k;
    cin>>n>>k;
    vector<int>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    ll sum=0;
    for(int i=0; i<n; i++) sum+=a[i]/b[i];
    if(sum>=k)
    {
        for(int i=0; i<n; i++)
        {
            sum-=a[i]/b[i]; // now some is only storing rest of people capacity.
            int dif=k-sum; // the amount rest of people can't solve only I can handle it. 
            if(dif<0)
            {
                dif=0;
            }
            k-=dif;
            cout<<dif<<' '; // i'th people only solve that he need to solve not more not less. 
        }
        cout<<en;
    }
    else
    {
        for(int i=0; i<n; i++)
        {
            cout<<0<<' ';
        }
        cout<<en;
    }
}
    return 0;
}