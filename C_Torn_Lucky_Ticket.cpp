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
    vector<string>v(n);
    for(auto &it:v) cin>>it;
   // printv(v);
    ll ans=0;
    for(ll left=1; left<=5; left++)
    {
        for(ll right=1; right<=5; right++)
        {
            ll len=left+right;
            if(len&1LL) continue;
            ll half=len/2;
            if(left==right)
            {
                map<ll,ll>num;
                for(auto &it:v)
                {
                    if(it.size()!=left) continue;
                    ll sum=0;
                    for(auto &ch:it) sum+=ch-'0';
                    num[sum]++; 
                }
                for(auto &[x,y]:num)
                {
                    ans+=y*y;
                } 
               // cout<<left<<' '<<ans<<en;
                
            }
            else if(left<right)
            {
                map<ll,ll>num;
                for(auto &it:v)
                {
                    if(it.size()!=left) continue;
                    ll sum=0;
                    for(auto &ch:it) sum+=ch-'0';
                    num[sum]++;
                }
                for(auto &it:v)
                {
                    if(it.size()!=right) continue;
                    ll sum=0;
                    for(int i=0; i<half-left; i++) sum-=(it[i]-'0');
                    for(int i=half-left; i<right; i++) sum+=(it[i]-'0');
                     ans+=num[sum];
                }
            }

            else
            {
                map<ll,ll>num;
                for(auto &it:v)
                {
                    if(it.size()!=right) continue;
                    ll sum=0;
                    for(auto &ch:it) sum+=ch-'0';
                    num[sum]++;
                }
                for(auto &it:v)
                {
                    if(it.size()!=left) continue;
                    ll sum=0;
                    for(int i=0; i<half; i++) sum+=(it[i]-'0');
                    for(int i=half; i<left; i++) sum-=(it[i]-'0');
                    ans+=num[sum];
                }
            }

           // cout<<left<<' '<<right<<' '<<ans<<en;
        }
    }
    cout<<ans<<en;
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