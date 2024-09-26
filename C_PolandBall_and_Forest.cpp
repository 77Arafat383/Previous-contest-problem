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


const int N=1e4+100;
vector<int>tree[N];
vector<int>vis(N,0);
void dfs(int node)
{
    vis[node]=1;
    for(auto &it:tree[node])
    {
        if(!vis[it]) dfs(it);
    }
}

void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        tree[i].push_back(x);
        tree[x].push_back(i);
    }
    int ans=0;
    for(int i=1; i<=n; i++)
    {
        if(!vis[i])
        {
            ans++;
            dfs(i);
        }
    }
    cout<<ans<<endl;
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}