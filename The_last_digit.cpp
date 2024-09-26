//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<iostream>
using namespace std;
#define    ll               long long
const int M =  1e9;

#define    w(x)             while(x--)



int binex(int a, ll b)
{
    int ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*1LL*a)%M;
        }
        a=(a*1LL*a)%M;
        b>>=1;
    }
    return ans;
}

void solve()
{
    int a;
    ll b;
    cin>>a>>b;
    int ans=binex(a,b)%10;
    
    cout<<ans<<endl;
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}