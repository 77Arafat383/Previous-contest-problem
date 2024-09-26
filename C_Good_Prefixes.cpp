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
    int ans=0;
    ll sum=0;
    set<ll>s;
    for(int i=0; i<n; i++)
    {
        ll x;
        cin>>x;
        if(i==0 and x==0) 
        {
            ans++;
            continue;
        }
        sum+=x;
        s.insert(x);
        if(sum&1) continue;
        ll dd=sum/2;
       if(s.end()!=s.find(dd)) ans++;
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