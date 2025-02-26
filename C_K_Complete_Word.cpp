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
const int N=1e5;




void solve()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<bool>vis(n,false);
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        if(vis[i]) break;
        vector<int>cnt(26,0);
        for(int j=i; j<n; j+=k)
        {
            if(vis[j]) break;
            cnt[s[j]-'a']++;
            vis[j]=true;
        }
        for(int j=n-i-1; j>=0; j-=k)
        {
            if(vis[j]) break;
            cnt[s[j]-'a']++;
            vis[j]=true;
        }
        int total=accumulate(all(cnt),0);
        int mx=*max_element(all(cnt));
        ans+=total-mx;
    }
    cout<<ans<<'\n';
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