//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;




void solve()
{
    int n,s,m;
    cin>>n>>s>>m;
    set<pair<int,int>>st;
    for(int i=1; i<=n; i++)
    {
        int l,r;
        cin>>l>>r;
        st.insert({l,r});
    }
    bool posible=false;
    auto [x,y]=*st.begin();
    if(x>=s)
    {
        posible=true;
    }
    st.erase({x,y});
    while(!st.empty())
    {
        auto dd=*st.begin();
        x=dd.first;
        st.erase(dd);
        int dif=x-y;
        if(dif>=s) posible=true;
        y=dd.second;
    }
    if(m-y>=s) posible=true;
    if(posible)
    {
        cout<<"YES\n";
        return;
    }
    cout<<"NO\n";
    return;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}