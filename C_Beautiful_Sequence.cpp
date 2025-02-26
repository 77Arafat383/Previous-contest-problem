//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  998244353;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<nxt
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<nxt
#define printmv(a) for(auto [x,v]:a) {cout<<x<<nxt; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
const int N=1e5;

ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }
    return ans;
}


void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    vector<int>one,three,pos1,pos3;
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i]==1)
        {
            one.push_back(cnt);
            pos1.push_back(i);
        }
        else if(v[i]==3)
        {
            three.push_back(cnt);
            pos3.push_back(i);
        }
        else
        {
            cnt++;
        }
    }
    ll ans=0;
    for(int i=0; i<si(one); i++)
    {
        int j=lower_bound(all(pos3),pos1[i])-pos3.begin();
        if(j==pos3.size()) break;
        for( ; j<si(three); j++)
        {
            ll dif=three[j]-one[i];
            if(dif<=0) continue;
            ans=(ans+binex(2LL,dif)-1LL+M)%M;

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