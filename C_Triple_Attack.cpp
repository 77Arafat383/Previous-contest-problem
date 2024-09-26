//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vector<ll>v(n);
     for(auto &it:v) cin>>it;
     ll pos=1;
     ll cnt=0;
     for(int i=0; i<n; i++)
     {
         if(pos!=1 and v[i]!=0)
         {
            if(pos==2 and v[i]!=0)
            {
                     cnt++;
                     pos++;
                     v[i]--;
            }
           
            if(pos==3 and v[i]!=0)
            {
                cnt++;
                pos++;
                v[i]-=3;
            }
            if(pos==4) pos=1;

         }
         if(pos==1 and v[i]>0)
         {
            ll dorkar=v[i]/5;
            cnt+=dorkar*3;
            ll rem=v[i]%5;
            if(rem>2) rem=3;
            cnt+=rem;
            pos=rem+1;
            if(pos==4) pos=1;
         }

     }
     cout<<cnt<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}