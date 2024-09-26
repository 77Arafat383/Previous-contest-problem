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
const int N=1e5;

int digit_sum(int n)
{
    int sum=0;
    while(n)
    {
        sum+=n%10;
        n/=10;
    }
  //  if(sum>9) digit_sum(sum);
    return sum;
}


void solve()
{
    int n;
    cin>>n;
    set<int>s;
    for(int i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            s.insert(i);
            s.insert(n/i);
        }
    }
   // printv(s);
    int ans=-1;
    int sm=INT_MIN;
    for(auto &it:s)
    {
        int tem=digit_sum(it);
        if(tem>sm)
        {
            sm=tem;
            ans=it;
        }

    }
    cout<<ans<<endl;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}