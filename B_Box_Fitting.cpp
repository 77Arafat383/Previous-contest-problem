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
    ll n,sum;
    cin>>n>>sum;
    multiset<ll>s;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        s.insert(x);
    }
    ll ans=0;
    
    while(!s.empty())
    {
       // printv(s);
        ll tem=sum;
        auto it=s.end();
        it--;
        tem-=*it;
        s.erase(it);
        
        while(tem>0 and !s.empty())
        {
            
            auto bt=s.lower_bound(tem);
            if(bt==s.end())
            {
                bt--;
                tem-=*bt;
                s.erase(bt);
            }
            else if(*bt==tem)
            {
                tem-=*bt;
                s.erase(bt);
            }
            else if(bt==s.begin()) break;
            else 
            {
                bt--;
                tem-=*bt;
                s.erase(bt);
            }
            
        }
        ans++;

    }
    cout<<ans<<en;
}
signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}