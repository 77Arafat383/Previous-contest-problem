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


bool checking(string &str)
{
    int n=str.size();
    vector<int>ab,ba;
    for(int i=0; i<n; i++)
    {
        if(str[i]=='A' and str[i+1]=='B' )
        {
            ab.push_back(i);
        }
        else if(str[i]=='B' and str[i+1]=='A')
        {
           ba.push_back(i);
        }
    }
    for(int i=0; i<ab.size(); i++)
    {
        for(int j=0; j<ba.size(); j++)
        {
            if(abs(ab[i]-ba[j])>=2)
            {
                return true;
            
            }
        }
    }
    return false;
}

void solve()
{
    string str;
    cin>>str;
    if(checking(str))
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
int ttt=1;
//cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}