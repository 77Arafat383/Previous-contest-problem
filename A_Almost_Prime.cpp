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

const int N=3e3+10;
int prime_divisors[N];





void solve()
{
    for(int i=2; i<N; i++)
    {
        if(prime_divisors[i]==0)
        {
            for(int j=i*2; j<N; j+=i)
            {
                prime_divisors[j]++;
            }
        }
    }
    int n;
    cin>>n;

    int cnt=0;
    for(int i=2; i<=n; i++)
    {
        if(prime_divisors[i]==2) cnt++;
    }

    cout<<cnt<<endl;

}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}