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
    string str;
    cin>>str;
    vector<vector<int>>mp(10);
    int n=si(str);
    for(int i=0; i<n; i++)
    {
        mp[str[i]-'0'].push_back(i);
    }
    int ans=INT_MAX;
    for(int i=0; i<10; i++)
    {
        ans=min(ans,n-si(mp[i]));
    }
    for(int i=0; i<10; i++)
    {
        if(si(mp[i])==0) continue;
        for(int j=i+1; j<10; j++)
        {
            if(si(mp[j])==0) continue;
            int cnt=0;
            int k=0;
            if(mp[j][0]<mp[i][0]) k=1;
            int p=0,q=0;
            int last=-1;
            while(p<mp[i].size() and q<mp[j].size())
            {
                 if(k==1 )
                 {
                    while(mp[j][q]<last and q<mp[j].size())
                    {
                        q++;
                    }
                    if(q==mp[j].size()) break;
                    last=mp[j][q];
                    cnt++;
                    k=0;

                 }
                 else
                 {
                    while(mp[i][p]<last and p<mp[i].size())
                    {
                        p++;
                    }
                    if(p==mp[i].size()) break;
                    last=mp[i][p];
                    cnt++;
                    k=1;
                 }
            }
            if(cnt&1) cnt--;
            ans=min(ans,n-cnt);
        }
    }
    cout<<ans<<nxt;
   
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