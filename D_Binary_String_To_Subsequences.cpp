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
    int n;
    cin>>n;
    string str;
    cin>>str;
    set<int>zero,one;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='0') zero.insert(i);
        else one.insert(i);
    }
    vector<int>ans(n);
    int cnt=1;
    while(!zero.empty() and !one.empty())
    {
        int triger=0;
        int last=*zero.begin();
        if(*one.begin()<*zero.begin())
        {
            triger=1;
            last=*one.begin();
        }
        ans[last]=cnt;
        while(1)
        {
            if(triger==0)
            {
                auto it=zero.lower_bound(last);
                if(it==zero.end()) break;
                last=*it;
                zero.erase(it);
                ans[last]=cnt;
                triger=1;
            }
            else
            {
                auto it=one.lower_bound(last);
                if(it==one.end()) break;
                last=*it;
                one.erase(it);
                ans[last]=cnt;
                triger=0;
            }
        }
        cnt++;

    }
    for(auto &i:zero)
    {
        ans[i]=cnt;
        cnt++;
    }
    for(auto &i:one)
    {
        ans[i]=cnt;
        cnt++;
    }
    cout<<cnt-1<<'\n';
    printv(ans);
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