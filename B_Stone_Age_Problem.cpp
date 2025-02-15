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
    ll n,q;
    cin>>n>>q;
    vector<ll>v(n+1),up(n+1,0);
    ll sum=0;
    for(int i=1; i<=n ; i++)
    {
        cin>>v[i];
        sum+=v[i];
    }
    ll update=0,last_value=-1;
    while(q--)
    {
        int key;
        cin>>key;
        if(key==1)
        {
            ll idx,value;
            cin>>idx>>value;
            if(up[idx]!=update)
            {
                v[idx]=last_value;
                up[idx]=update;
            }
            sum=sum-v[idx]+value;
            v[idx]=value;
            
        }
        else
        {
            ll value;
            cin>>value;
            sum=n*value;
            last_value=value;
            update++;
        }
        cout<<sum<<en;
    }
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