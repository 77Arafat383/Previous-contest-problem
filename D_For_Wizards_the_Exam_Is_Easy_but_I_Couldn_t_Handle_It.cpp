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
    ll n;
    cin>>n;
    vector<ll>v(n);
    taking(v);
    
    int l=-1,r=-1,profit=0;
    for(int i=0; i<n;i++)
    {
        int kombe=0,barge=0;
        for(int j=i+1; j<n; j++)
        {
            if(v[j]>v[i])
            {
                barge++;
            }
            else if(v[j]<v[i]) kombe++;

            int temp=kombe-barge;
            if(temp>profit)
            {
                l=i+1;
                r=j+1;
                profit=temp;
            }
        }
    }
    if(l==-1 and r==-1) l=1,r=1;
    cout<<l<<' '<<r<<'\n';

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