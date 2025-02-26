//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define nxt '\n'
const int M =  1e9+7;
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




void solve()
{
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    ll ans=0;
    ll lo=0,hi=n;
    while(lo<=hi)
    {
        ll mid=lo+(hi-lo)/2;
        bool ok=false;
        vector<int>mp(2,0);
        int cnt=0;
        for(int i=0; i<n; i++)
        {
           mp[str[i]-'a']++;
           cnt++;
           if(cnt>mid)
           {
                mp[str[i-mid]-'a']--;
                cnt--;

           }
           
           if(cnt==mid and min(mp[0],mp[1])<=k)
        {
                ok=true;
                break;
           }
        }
        if(ok)
        {
            ans=mid;
            lo=mid+1;
        }
        else
        {
            hi=mid-1;
        }

    }
    cout<<ans<<'\n';
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}