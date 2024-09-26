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
    vector<int>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            mp[b[i]]++;
        }
        else
        {
            mp[b[i]]+=0;
        }
    }
    //sequently use na korar karone age accept hoy nai. 
    int m;
    cin>>m;
    vector<int>v(m);
    for(auto &it:v) cin>>it;
    bool ok=true;
    for(int i=0; i<m; i++)
    {
        auto it=mp.find(v[i]); 
        if(it!=mp.end())
        {
            if(it->second>0)
             {
                it->second--;
             }
            ok=true;

        }
        else
        {
            ok=false;
        }
    }
    for(auto &[x,y]:mp) if(y>0) ok=false;
    cout<<(ok? "YES":"NO")<<endl;
    return;

}


int main()
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