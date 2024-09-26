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
    map<int,int>niche,upore;
    vector<int>up,down;
    for(int i=0; i<n; i++)
    {
        int x,y;
        cin>>x>>y;
        if(y==0) niche[x]++,down.push_back(x);
        else upore[x]++,up.push_back(x);
    }
    ll ans=0;
    for(auto &[x,y]:niche)
    {
        if(upore[x]>0)
        {
            ans+=n-2;
            

        }
        
    }
    for(auto &x:up)
    {
        if(niche[x-1] and niche[x+1]) ans++;
    }
    for(auto &x:down)
    {
        if(upore[x+1] and upore[x-1]) ans++;
    }
    cout<<ans<<endl;
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