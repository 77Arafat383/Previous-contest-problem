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
int decendent[N]={1};

void dfs(int node, int per)
{
    decendent[node]=0;
    for(auto &it:tree[node])
    {
        if(it!=per)
        {
            dfs(it,node);
            decendent[node]+=decendent[it];
        }
    }
    decendent[node]+=1;
    return;
}

ll binex(ll a, ll b)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
        {
            ans=(ans*a)%M;
        }
        a=(a*a)%M;
        b>>=1;
    }

    return ans;
}
void solve()
{
    int n;
    cin>>n;
    for(int i=1; i<n; i++)
    {
        int u,v;
        cin>>u>>v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    dfs(1,-1);
    int q;
    cin>>q;
    w(q)
    {
        int x;
        cin>>x;
        ll ans=binex(2,decendent[x]);
        cout<<ans<<" ";
    }
    cout<<endl;

    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}