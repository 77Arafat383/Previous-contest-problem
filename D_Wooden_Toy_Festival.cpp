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




void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    sort(all(v));
    v.erase(unique(all(v)),v.end());
    n=v.size();
    ll ans=0;
    ll lo=0,hi=1e9+10;
    while(lo<=hi)
    {
        ll mid=lo+(hi-lo)/2;
        int cnt=0;
        int last=-1;
        for(int i=0; i<n; i++)
        {
            if(v[i]>last)
            {
                last=v[i]+mid*2;
                cnt++;
            }
        }
        if(cnt<=3)
        {
            hi=mid-1;
            ans=mid;
        }
        else
        {
            lo=mid+1;
        }
    }
    cout<<ans<<en;

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