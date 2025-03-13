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
    int n,q;
    cin>>n>>q;
    string a,b;
    cin>>a>>b;
    vector<vector<vector<int>>>v(26,vector<vector<int>>(2,vector<int>(n+1,0)));
    for(int i=1; i<=n; i++)
    {
        v[a[i-1]-'a'][0][i]=1;
        v[b[i-1]-'a'][1][i]=1;
    }
    for(int i=0; i<26; i++)
    {
        for(int j=1; j<=n; j++)
        {
            v[i][0][j]+=v[i][0][j-1];
            v[i][1][j]+=v[i][1][j-1];
        }
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        int ans=0;
        for(int i=0; i<26; i++)
        {
            int target=v[i][1][r]-v[i][1][l-1];
            int present=v[i][0][r]-v[i][0][l-1];
            ans+=abs(target-present);
        }
        ans/=2;
        cout<<ans<<'\n';
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