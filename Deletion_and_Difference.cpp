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
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    deque<int>dq;
    for(int i=0; i<n; i++) dq.push_back(v[i]);
    ll ans=0;
    while(dq.size()>1)
    {
        int a=dq.back();
        dq.pop_back();
        int b=dq.back();
        dq.pop_back();
        if(a==b)
        {
            dq.push_front(0);
        }
        else
        {
            ans++;
            dq.push_back(b);
        }
    }
    cout<<dq.size()+ans<<nxt;
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