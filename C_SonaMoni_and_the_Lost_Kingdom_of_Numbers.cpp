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


bool cmp(pair<ll,ll> &a, pair<ll,ll> &b)
{
    if(a.first==b.first) return a.second>b.second;
    return a.first<b.first;
}

void solve()
{
    ll n;
    cin>>n;
    vector<pair<ll,ll>>v(n);
    for(int i=0; i<n; i++)
    {
         ll l,r;
         cin>>l>>r;
        //  l--;
        //  r++;
         v[i]={l,r};
    }
    sort(all(v),cmp);
    ll right=0;
    ll curse=0;
    for(auto &[l,r]:v)
    {
      //  cout<<l<<' '<<r<<' ';
        if(l<=right) l=right+1;
        if(r>right)
        {
            curse+=r-l+1;
            right=r;
        } 
      //  cout<<curse<<en;
    }
    ll total=1000000000;
    total-=curse;
    if(total<0) total=0;
    cout<<total<<en;

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