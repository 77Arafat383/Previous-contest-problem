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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    sort(all(v));
    int rem=n-k-1;
    int st=0,en=rem;
    int ans=INT_MAX;
    
    while(en<n and st<=en)
    {
        int dif=v[en]-v[st];
        ans=min(ans,dif);
        st++;
        en++;
    }
    cout<<ans<<endl;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}