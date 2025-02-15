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
    vector<int>v(n),ans;
    set<int>tem;
    for(auto &it:v) cin>>it;
    for(int i=0; i<n; i++)
    {
        if(tem.empty()) tem.insert(v[i]);
        else
        {
            auto it=tem.lower_bound(v[i]);
            if(it==tem.end()) tem.insert(v[i]);
            else
            {
                tem.erase(it);
                tem.insert(v[i]);
            }
            if(tem.size()>1)
            {
                auto bt=tem.begin();
                bt++;
                ans.push_back(*bt);
            }
        }
    }
    ans.erase(unique(all(ans)),ans.end());
    cout<<ans.size()<<en;
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