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




void solve()
{
    int ux,uy,vx,vy;
    cin>>ux>>uy>>vx>>vy;
    if(ux<uy)
    {
        if(vx<vy)
        {
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;
    }
    else 
    {
       if(vy<vx)
        {
            cout<<"YES\n";
            return;
        }
        cout<<"NO\n";
        return;

    }
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}