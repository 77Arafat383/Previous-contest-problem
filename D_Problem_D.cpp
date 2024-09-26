//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<iostream>
using namespace std;

#define    w(x)             while(x--)
#define ll long long
const int N=1e4;


int binex(int a, ll b) 
{
   int ans=1;
    while(b)
    {
        if(b&1) 
        {
            ans=(ans*1LL*a)%N;

        }
        a=(a*1LL*a)%N;
        b>>=1;
    }
    return ans;
}


void solve()
{
    int a;
    ll b;
    cin>>a>>b;
   int ans=binex(a,b);
    int rem=ans%10;
    cout<<rem<<endl;
    return;

}


int main()
{
 
int t;
cin>>t;
w(t) solve();
    return 0;
}