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


ll cal(int a, int b, int k)
{
    ll ans=(a*k)-(b*(k-1));
    return ans;
}

void solve()
{
    int n,h,k;
    cin>>n>>h>>k;
    if(h==1)
    {
        cout<<n*n<<endl;
        return;
    }
    int  j=1;
    ll ans=0;
    for(int i=2; i<=n; i++)
    {
        if(h==i)
        {
            ll rest=(n-i+1)*n;
            ans+=rest;
            cout<<ans<<endl;
            return;
        }
        while(cal(i,j,k)>=h and j<=n)
        {
            j++;
        }
        //cout<<i<<" "<<j<<endl;
        if(cal(i,j-1,k)>=h) ans+=j-1;


        
    }
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