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
    vector<pair<int,int>>edge;
    for(int i=2; i<=n; i++)
    {
        int l=-1,r=i;
        int x=1;
        while(l!=x)
        {
            l=x;
            cout.flush();
            cout<<"? "<<l<<' '<<r<<en;
            cout.flush();
            cin>>x;
            cout.flush();
        }
        edge.push_back({l,r});


    }
    cout.flush();
    cout<<"! ";
    for(auto &[l,r]:edge) cout<<l<<' '<<r<<' ';
    cout<<en;
    cout.flush();
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