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
    ll n,m;
    cin>>n>>m;
    vector<int>v(n,0);
    for(int i=0;  i<m; i++)
    {
        int x;
        cin>>x;
        x--;
        v[x]++;
    }
    sort(v.rbegin(),v.rend());
    //printv(v);
    ll lo=0,hi=1e12+10;
    ll ans=0;
    while(lo<=hi)
    {
         ll mid=lo+(hi-lo)/2;
         ll extra=0;
         for(int i=0; i<n; i++)
         {
            if(v[i]>mid)
            {
                extra+=(v[i]-mid);
            }
            else
            {

                ll dif=mid-v[i];
                dif/=2;
                if(extra>=dif) extra-=dif;
                else
                {
                    extra=0;
                }
            }
         }

         if(extra>0)
         {
            lo=mid+1;
         }
         else
         {
            ans=mid;
            hi=mid-1;
         }
    }

   cout<<ans<<en;
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