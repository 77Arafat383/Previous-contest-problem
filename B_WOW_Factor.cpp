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
    string str;
    cin>>str;
    int n=str.size();
    vector<int>v,track;
    bool ok=false;
    int cnt=0;
    for(int i=0; i<n-1; i++)
    {
        if(str[i]==str[i+1] and str[i]=='v')
        {
             if(ok)
             {
                track.push_back(0);
                v.push_back(cnt);
             }
             cnt=0;
             ok=true;
             while(str[i]=='v' and i<n)
             {
                cnt++;
                i++;
             }
             track.push_back(1);
             v.push_back(cnt-1);
             cnt=1;
        }
        else if(str[i]=='o')
        {
            cnt++;
        }
    }
    // printv(ones);
    // printv(zeros);
    // printv(track);
    ll ans=0;
    ll total=0,store=0;
    for(int i=0; i<track.size(); i++) 
    {
        if(track[i]==1) total+=v[i];
    }
   // printv(v);
   // printv(track);
    //cout<<total<<en;
    for(int i=0; i<track.size(); i++)
    {
         if(track[i]==1)
         {
            store+=v[i];
            total-=v[i];
         }
         else
         {
            ans+=store*v[i]*total;
         }
    }
    cout<<ans<<en;
}

signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}