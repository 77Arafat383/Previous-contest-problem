//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl


const int N=2e6+10;
bool isPrime[N];

void solve()
{
    for(int i=2; i*i<=N; i++)
    {
        if(!isPrime[i])
        {
            for(int j=i*2; j<=N; j+=i)
            {
                isPrime[j]=1;
            }
        }
    }
    vector<int>prime(0);
   int cnt=0;
   int ans=0;
   int n;
   cin>>n;
   int i=2; 
   while(cnt<n)
   {
       if(!isPrime[i])
       {
        cnt++;
        ans=i;
       }
       i++;
   }
   cout<<ans<<endl;
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}