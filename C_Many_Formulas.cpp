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
ll ans1;
ll pw(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1) ans*=a;
        a*=a;
        b>>=1;
    }
    return ans;
}
void f(int i, int &n, string &str, string ans)
{
    if(i==n)
    {
       // cout<<ans<<en;
        
        ll tem=0;
        ll cnt=0;
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]!='+')
            {
               
                ll val=ans[i]-'0';
                tem=tem*10+val;
               //  cout<<tem<<' ';
                cnt++;
            }
            else
            {
              //  cout<<tem<<' ';
                ans1+=tem;
                tem=0;
                cnt=0;
            }
        }
      //  cout<<tem<<' '<<en;
        ans1+=tem;
        
        return;
       
    }
   
    
    ans.push_back(str[i]);
    f(i+1,n,str,ans);
    ans.pop_back();
    ans.push_back('+');
    ans.push_back(str[i]);
    f(i+1,n,str,ans);
}
void solve()
{
    string str;
    cin>>str;
    int n=str.size();
    string ans;
    ans.push_back(str[0]);
    f(1,n,str,ans);
    cout<<ans1<<en;
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}