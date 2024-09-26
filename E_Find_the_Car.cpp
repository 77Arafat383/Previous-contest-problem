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
    int n,k,q;
    cin>>n>>k>>q;
    vector<int>a(k+1),b(k+1);
    for(int i=1; i<=k; i++) cin>>a[i];
    for(int i=1; i<=k; i++) cin>>b[i];
    w(q)
    {
        int x;
        cin>>x;
        int idx=upper_bound(all(a),x)-a.begin();
       // cout<<idx<<" ";
       int ans=b[idx-1];
       int dd=((b[idx]-b[idx-1])*(x-a[idx-1]))/(a[idx]-a[idx-1]);
     
       cout<<ans<<" ";
        
    }
    cout<<endl;

}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}