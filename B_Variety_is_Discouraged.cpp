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
    vector<int>v(n+1),freq(n+1);
    for(int i=1; i<=n;i++)
    {
        cin>>v[i];
        freq[v[i]]++;
    }
    int l=-1,r=-1;
    int i=1;
    while(i<=n)
    {
        if(freq[v[i]]==1)
        {
           int j=i;
           while(j<=n)
           {
            if(freq[v[j]]==1) j++;
            else break;
           }
           if(l==-1)
           {
            l=i;
            r=j-1;
           }
           else
           {
            if(r-l+1<=j-i)
            {
                l=i;
                r=j-1;
            }
           }
           i=j;
        }
        else
        {
            i++;
        }
    }
    if(l==-1)
    {
        cout<<"0\n";
        return;
    }
    cout<<l<<' '<<r<<'\n';
    return;
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