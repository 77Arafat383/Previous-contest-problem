//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;




void solve()
{
    int n;
    cin>>n;
    vl v(n);
    taking(v);
    ll ans=0;
    for(auto &it:v) ans+=it;

    while(si(v)>1)
    {
        n=v.size();
        vl tem1,tem2;
        ll left=0,right=0;
        for(int i=0; i<n-1; i++)
        {
            tem1.push_back(v[i+1]-v[i]);
            left+=tem1.back();
        }
        for(int i=n-1; i>=1; i--)
        {
            tem2.push_back(v[i-1]-v[i]);
            right+=tem2.back();
        }
        if(left>right)
        {
            v=tem1;
            ans=max(ans,left);
        }
        else
        {
            v=tem2;
            ans=max(ans,right);
        }
    }
    cout<<ans<<'\n';

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