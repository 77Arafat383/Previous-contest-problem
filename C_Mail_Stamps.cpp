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



map<ll,vector<ll>>graph;

vector<ll>main_ans;
void dfs(vector<ll> &ans, ll u, ll per)
{
    
    
    
    ans.push_back(u);
    if(graph[u].size()==1 and ans.size()>1)
    {
        main_ans=ans;
        return;
    }
    for(auto &v:graph[u])
    {
        if(v!=per) dfs(ans,v,u);
    }
    return;
}

void solve()
{
    int n;
    cin>>n;
    map<ll,int>mp;
    for(int i=1; i<=n; i++)
    {
        ll x,y;
        cin>>x>>y;
        mp[x]++;
        mp[y]++;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    // for(auto &it:graph)
    // {
    //     cout<<it.first<<endl;
    //     for(auto &bt:it.second) cout<<bt<<" "; cout<<endl;
    // }
    
    ll per;
    for(auto &it:mp)
    {
        if(it.second==1)
        {
            per=it.first;
           break;
            
        }
        
    }
//    cout<<per<<endl;
    vector<ll>ans;
    dfs(ans,per, -1);
    printv(main_ans);

}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}