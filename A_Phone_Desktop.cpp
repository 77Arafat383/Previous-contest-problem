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




void solve()
{
    int x, y;
    cin>>x>>y;
    ll ans=y/2;
    y-=ans*2;
    int rest=ans*7;
    if(y>0)
    {
        ans++;
        y=0;
        rest+=7+4;
        if(rest>x)
        {
            x=0;
            rest=0;

        }
        else
        {
            x-=rest;
            rest=0;
        }



    }
    if(x<=rest)
    {
        x=0;
        rest=0;

    }
    else
    {
        x-=rest;
        rest=0;
    }
    if(x==0 and y==0)
    {
        cout<<ans<<endl;
        return;
    }

    if(x>0)
    {
        ans+=x/15;
        if(x%15!=0) ans++;
    }
    cout<<ans<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}