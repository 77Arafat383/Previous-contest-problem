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
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        mp[v[i]]++;
    }
    sort(all(v));
    v.erase(unique(all(v)),v.end());
    int p=-1;
    for(auto &[x,y]:mp)
    {
        if(y>=2) p=x;
    }
    
    if(p==-1)
    {
        cout<<-1<<'\n';
        return;
    }
    int a=-1,b=-1;
    int pv=-1;
    for(int i=0; i<v.size(); i++)
    {
        int x=v[i];
        int cnt=mp[x];
        if(x==p) cnt-=2;
        if(cnt==0) continue;
        if(cnt>=2)
        {
            cout<<p<<' '<<p<<' '<<x<<' '<<x<<'\n';
            return;
        }
        if(pv!=-1)
        {
            if(p+p+pv>x and p+p+x>pv)
            {
                cout<<p<<' '<<p<<' '<<pv<<' '<<x<<'\n';
                return;
            }
        }
        pv=x;
    }
    cout<<-1<<'\n';
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