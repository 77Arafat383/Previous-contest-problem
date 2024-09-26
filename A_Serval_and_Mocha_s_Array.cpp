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
    int n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v) cin>>it;

    bool ok=false;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(__gcd(v[i],v[j])<=2)
            {
               cout<<"Yes\n";
               return;
            }
        }

        
    }
    cout<<"No\n";
    return;

}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}