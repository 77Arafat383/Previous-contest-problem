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
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    int n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++) cin>>a[i],b[i]=a[i];
        reverse(b,b+n);
        ll sum=0;
        for(int i=0;i<n;i++)sum+=a[i];
        for(int i=n-1;i>=1;i--)
        {
            ll b[n];
            for(int j=i-1;j>=0;j--)
            {
                b[j]=a[j+1]-a[j];
                //cout<<b[j]<<" ";
            }
            //cout<<"\n";
            for(int i=0;i<n;i++)a[i]=b[i];
            ll tem1=0,tem2=0;
            for(int j=0;j<=i-1;j++)tem1+=a[j],tem2=tem2-a[j];
            sum=max(sum,max(tem1,tem2));
        }
        cout<<sum<<"\n";
}
    return 0;
}