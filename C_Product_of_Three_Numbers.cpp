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
    vector<ll>v;
    for(ll i=1; i*i<=n; i++)
    {
        if(n%i==0)
        {
            v.push_back(i);
            if(i!=n/i) v.push_back(n/i);
        }
    }
    sort(all(v));
    for(ll i=1; i<v.size(); i++)
    {
        for(ll j=i+1; j<v.size(); j++)
        {
            if(v[i]*v[j]>n) break;
            for(ll k=j+1; k<v.size(); k++)
            {
                if(v[i]*v[j]*v[k]>n) break;
                else if(v[i]*v[j]*v[k]==n)
                {
                    Judge(1);
                    cout<<v[i]<<' '<<v[j]<<' '<<v[k]<<en;
                    return;
                }
            }
        }
    }
    Judge(0);
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