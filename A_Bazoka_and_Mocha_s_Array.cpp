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
    vector<ll>v(n); for(auto &it:v) cin>>it;
    int cnt=0;
    int pv=-1;
    for(int i=0; i<n; i++) 
    {
        if(v[i]<pv) cnt++;
        pv=v[i];
    }
    //cout<<cnt<<endl;
    if(cnt>1)
    {
        cout<<"No\n";
        return;
    }
    if(cnt==1)
    {
        if(v[0]>=v[n-1])
        {
            cout<<"Yes\n";
            
        }
        else
        {
            cout<<"No\n";
            return;
        }
        return;
    }
    cout<<"Yes\n";
    return;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}