//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl

const int N=2e5+10;
vector<int>tree[N];
int heigh[N]={0};

int dfs(int u, int per)
{
    heigh[u]=0;
  // cout<<u<<endl;
    for(auto &v:tree[u])
    {
        if(v!=per)
        {
           heigh[u]=max(heigh[u],dfs(v,u)+1);

        }
    }
    return heigh[u];


}

void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    int ans=dfs(1,-1);
   cout<<ans*2<<endl;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}