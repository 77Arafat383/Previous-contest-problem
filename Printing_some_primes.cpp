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

const int N=100;
int status[N/32];
bool check(int n, int pos)
{
    return (n&(1<<pos));
}
int Set(int n, int pos)
{
    return n|(1<<pos);
}

void sieve()
{
    for(int  i=3; i<=sqrt(N); i+=2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            for(int j=i*i; j<=N;j+=2*i)
            {
                status[i>>5]=Set(status[i>>5],j&31);
            }
        }
    }
    cout<<2<<endl;
    for(int i=3; i<=N; i+=2)
    {
        if(check(status[i>>5],i&31)==0)
        {
            cout<<i<<endl;
        }
    }
}


void solve()
{
    sieve();
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}