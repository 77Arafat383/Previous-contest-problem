//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;




void solve()
{
    ll n,k,q;
    cin>>n>>k>>q;
    vector<ll>a(k+1,0),b(k+1,0);
    for(int i=1; i<=k; i++) cin>>a[i];
    for(int i=1; i<=k; i++) cin>>b[i];
    while(q--)
    {
        ll d;
        cin>>d;
        int idx=upper_bound(all(a),d)-a.begin();
        idx--;
        ll ans=b[idx];
        d-=a[idx];
        if(idx==k or d==0)
        {
            cout<<ans<<' ';
            continue;
        }
        ans+=d*(b[idx+1]-b[idx])/(a[idx+1]-a[idx]);
        cout<<ans<<' ';
    }
    cout<<en;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}