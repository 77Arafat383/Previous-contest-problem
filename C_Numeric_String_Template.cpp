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
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    int m;
    cin>>m;
    while(m--)
    {
       
        string str;
        cin>>str;
        
        map<char,set<int>>mp;
         set<int>demo;
        if(str.size()!=n)
        {
            cout<<"NO\n";
            goto f;
        }
        for(int i=0; i<n; i++)
        {
            mp[str[i]].insert(v[i]);
        }
       
        for(auto &[x,y]:mp)
        {
            if(y.size()!=1)
            {
                cout<<"NO\n";
                goto f;
            }
            demo.insert(*y.begin());
        }
        if(demo.size()!=mp.size())
        {
            cout<<"NO\n";
            goto f;
        }
        cout<<"YES\n";

        
       
        


         f:

    }
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