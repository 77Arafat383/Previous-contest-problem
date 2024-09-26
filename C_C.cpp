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
    int n,k;
    cin>>n>>k;
    string str;
    cin>>str;
    map<char,vector<int>>mp;
    for(int i=0; i<n; i++)
    {
        mp[str[i]].push_back(i);
    }
    // for(auto &it:mp)
    // {
    //     for(auto &ch:it.second) cout<<ch<<" "; cout<<endl;
    // }
    for(auto &it:mp)
    {
        if(it.second.size()<k)
        {
            mp.erase(it.first);
            k-=it.second.size();
        } 
        else
        {
            vector<int>tem;
            for(int i=k; i<it.second.size(); i++)
            {
                tem.push_back(it.second[i]);

            }
            it.second.clear();
           for(int i=0; i<tem.size(); i++) it.second.push_back(tem[i]);
           k=0;
           
             break;

        }
    }
    vector<bool>vis(n+4,0);
    for(auto &it:mp)
    {
        for(auto &dd:it.second) vis[dd]=true;
    }
    for(int i=0; i<n; i++)
    {
        if(vis[i]) cout<<str[i];
    }
    cout<<endl;
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}