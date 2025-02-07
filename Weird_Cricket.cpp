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
const int N=1e6+1;
vector<int>isprime(N+2,0);
void seive()
{
    isprime[0]=0;
    isprime[1]=1;
    for(int i=2; i*i<=N; i++)
    {
        if(isprime[i]==0)
        {
            isprime[i]=i;
            for(int j=i*i; j<=N; j+=i)
            {
              //  if(j==30) cout<<i<<en;
              if(isprime[j]==0)
                isprime[j]=i;
            }
        }
    }
    for(int i=1; i<N; i++) if(isprime[i]==0) isprime[i]=i;
 
}

void solve()
{
    int n;
    cin>>n;
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        ans+=isprime[x]*1LL;
      //  cout<<isprime[x]<<' ';
    }
    cout<<ans<<en;
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
    seive();
    solve();
}
    return 0;
}