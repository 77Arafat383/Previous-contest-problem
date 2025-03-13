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
    vector<int>v(n+1);
    vector<char>str(n+1);
    for(int i=1;i<=n;i++) cin>>v[i];
    for(int i=1;i<=n;i++) cin>>str[i];
    vector<int>blue,red;
    for(int i=1; i<=n; i++)
    {
        if(str[i]=='B') blue.push_back(v[i]);
        else red.push_back(v[i]);
    }
    sort(all(red));
    sort(all(blue));
    for(int i=0; i<si(blue); i++)
    {
        if(blue[i]>=i+1) blue[i]=i+1;
        else
        {
            cout<<"NO\n";
            return;
        }
    }
    for(int i=n,j=red.size()-1; j>=0; j--,i--)
    {
        if(red[j]<=i) red[j]=i;
        else
        {
            cout<<"NO\n";
            return;
        }
    }

    cout<<"YES\n";
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