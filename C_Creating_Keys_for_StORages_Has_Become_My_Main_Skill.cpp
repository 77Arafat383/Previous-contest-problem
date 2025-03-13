//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
const ll INF =  1e18;
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
    ll n,x;
    cin>>n>>x;
    vector<int>pos;
    for(int i=0; i<=30; i++)
    {
        if(x&(1LL<<i)) pos.push_back(i);
    }
    ll sz=pos.size();
    vector<int>ans;
    for(ll mask=0; mask<(1<<sz); mask++)
    {
        ll num=0;
        for(int i=0; i<32; i++)
        {
            if(mask&(1<<i))
            {
                int bit=pos[i];
                num|=(1<<bit);
            }
        }
        ans.push_back(num);
        if(ans.size()==n) break;
    }
    ll tem=0;
    sz=ans.size();
    for(int i=0; i<min(n,sz); i++) tem|=ans[i];
    //cout<<tem<<'\n';
    if(sz>=n)
    {
        if(tem==x)
        {
            for(int i=0; i<n; i++) cout<<ans[i]<<' ';
                cout<<'\n';
                return;
        }
        else
        {
            cout<<x<<' ';
            for(int i=0; i<n-1; i++) cout<<ans[i]<<' ';
            cout<<'\n';
            return;
        }
        
    }
    else
    {
        int i=0,j=0;
        while(i<n)
        {
            if(j>=sz) j=0;
            cout<<ans[j]<<' ';
            i++;
            j++;
        }
        cout<<'\n';
    }
   

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