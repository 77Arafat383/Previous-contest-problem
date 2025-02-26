//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
const int N=1e5;




void solve()
{
     string str;
     ll k;
     cin>>str>>k;
     ll sum=0;
     str='0'+str;
     int n=si(str);
     for(int i=0; i<n; i++)
     {
         sum+=(str[i]-'0');
        // cout<<sum<<' ';
     }
    // cout<<nxt;
     ll i=n-1;
     ll target=1;
     ll move=0;
     //cout<<sum<<nxt;
     //cout<<str<<nxt;
     while(sum>k and i>=0)
     {
         ll digit=str[i]-'0';
         //digit*=target;
        // target*=10;
         move+=(10-digit)*target;
         target*=10;
        //  if(str[i]=='0')
        //  {
        //     i--;
        //     continue;
        //  }
          sum=sum-(str[i]-'0')+1;
       //   cout<<target<<' '<<digit<<' '<<i<<' '<<move<<' ';
          
        //  cout<<sum<<'\n';

         i--;
         int j=i;
         while(str[j]-'0'==9 and j>=0)
         {
            target*=10;
            str[j]='0';
            sum-=9;
            j--;
         }
         i=j;
         str[j]++;
         
     }
        cout<<move<<nxt;

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