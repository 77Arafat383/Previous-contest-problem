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
const int N=1e6;

ll fibo[N];
ll f(int n)
{
    if(fibo[n]!=-1) return fibo[n];
    if(n==0 or n==1)
    {
        return n;
    }
    return  fibo[n]=(f(n-1)+f(n-2))%M;
}

void solve()
{
    
    memset(fibo, -1, N);
   cout<<f(1e4)<<endl;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}