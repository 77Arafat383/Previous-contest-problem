//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
const ll bM =  998244353;
#define    all(x)           x.begin(), x.end()
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define rsort(v) sort(v.rbegin(),v.rend());
#define taking(a)  for(auto &it:a) cin>>it;
#define printv(a)  for(auto &it:a) cout<<it<<' '; cout<<'\n'
#define printm(a)  for(auto &[x,y]:a) cout<<x<<' '<<y<<'\n'
#define printmv(a) for(auto [x,v]:a) {cout<<x<<'\n'; printv(v);}
#define bitcount(x) __builtin_popcount(x)
#define si(x) int(x.size())
#define vl vector<ll>
#define vll vector<pair<ll,ll>>
#define Mp map<ll,ll>
#define MV map<ll,vl>
const int N=1e5;




void solve()
{
    string str;
    cin>>str;
    int k;
    cin>>k;
    int n=str.size();
    if(k==1)
    {
       char st=str[0];
       for(int i=0; i<n; i++)
       {
        if(st<str[i])
        {
            st++;
            for(int i=0; i<n; i++)
            {
                str[i]=st;
            }
            cout<<str<<'\n';
            return;
        }
        else if(st>str[i])
        {
            str[i]=st;
        }
       }
       cout<<str<<'\n';
       return;
    }
    vector<int>pos(10,-1);
    set<int>s;
    bool ok=true;
    for(int i=0; i<n;i++)
    {
       s.insert(str[i]-'0');
       if(s.size()<=k)
       {
         pos[str[i]-'0']=i;
       }
       else
       {
        s.erase(str[i]-'0');
        ok=false;
        break;
       }
    }
    if(ok)
    {
        cout<<str<<'\n';
        return;
    }
    vector<int>vv;
    for(auto &it:s)
    {
        vv.push_back(it);
    }
    printv(vv);
    int mn=vv[0];
    int sc=vv[vv.size()-2];
    str[pos[sc]]++;
    for(int i=pos[sc]+1; i<n; i++)
    {
        str[i]=mn+'0';
    }
    cout<<str<<'\n';
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