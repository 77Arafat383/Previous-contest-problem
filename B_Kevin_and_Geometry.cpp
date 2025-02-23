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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(auto &it:v ) cin>>it;
    map<int,int>mp;
    vector<int>p;
    for(auto &it:v) mp[it]++;
    for(auto &[x,y]:mp) 
    {
        if(y>=4)
        {
            cout<<x<<' '<<x<<' '<<x<<' '<<x<<en;
            return;
        }
        if(y>=2) p.push_back(x);
    }
    for(auto &it:p)
    {
        int left=-1,right=-1;
        for(auto &[x,y]:mp)
        {
            if(x==it)
            {
                if(y>2) right=x ;
                 
            }
            else if(y>1)
            {
                cout<<it<<' '<<it<<' '<<x<<' '<<x<<en;
                return;
            }
            else right=x;
            if(left!=-1 and right!=-1)
            {
                if(left==right and mp[left]<2) continue;
                if(right-left<=it)
                {
                    cout<<it<<' '<<it<<' '<<left<<' '<<right<<en;
                    return;
                }
            }
            left=right;
        }
    }
    cout<<"-1\n";
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