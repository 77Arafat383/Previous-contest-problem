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
    bool odd=false,even=false;
    for(auto &it:v)
    {
        cin>>it;
        if(it&1) odd=true;
        else even=true;
    }
    if(odd and even)
    {
        cout<<-1<<en;
        return;
    }
    vector<int>ans;
    while(ans.size()<=40)
    {
        sort(all(v));
        if(v[0]==v.back())
        {
            if(v[0]!=0)
             ans.push_back(v[0]);
            break;
        }
        int sub=(v[0]+v.back())/2;
        for(int i=0; i<n; i++)
        {
            v[i]=abs(v[i]-sub);
        }
        ans.push_back(sub);

    }
    cout<<ans.size()<<en;
    printv(ans);
}
signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt;
ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
    solve();
}
    return 0;
}