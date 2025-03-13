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
    ll n;
    cin>>n;
    vl a(n);
    taking(a);
    vl pref(n+1);
    for(int i=1; i<=n;i++)
    {
        pref[i]+=pref[i-1]+a[i-1];
    }
    ll q;
    cin>>q;
    while(q--)
    {
        ll l,v;
        cin>>l>>v;
        ll hi=n,lo=l;
        ll r=-1,dif=INT_MAX;
        while(lo<=hi)
        {
             ll mid=lo+(hi-lo)/2;
             ll right=pref[mid]-pref[l-1];
             if(right>v)
             {
                if(dif>right-v-1)
                {
                    r=mid;
                    dif=right-v-1;
                }
                hi=mid-1;
             }
             else
             {
                if(dif>=v-right)
                {
                    r=mid;
                    dif=v-right;
                }
                lo=mid+1;
             }
        }
        cout<<r<<' ';
    }
    cout<<'\n';
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": \n";
solve();
}
    return 0;
}