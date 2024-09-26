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
const int N=2e5+10;
ll dis_1[N][2],dis_n[N][2];
vector<pair<int,int>>graph[N];
vector<bool>horse(N,false);


void reset(int n)
{
    for(int i=1; i<=n; i++)
    {
        graph[i].clear();
        horse[i]=false;
        dis_1[i][0]=dis_1[i][1]=LLONG_MAX;
        dis_n[i][0]=dis_n[i][1]=LLONG_MAX;

    }
}

void dijestra1()
{
    set<pair<ll,pair<ll,ll>>>st;
    int h=1;
    if(horse[1])
    {
        h=0;
    }
    st.insert({0,{h,1}});
    dis_1[1][h]=0;

    while(st.size())
    {
        auto dd=*(st.begin());
        ll dis=dd.first;
        ll cr=dd.second.first;
        int node=dd.second.second;
        st.erase(dd);

        // if(dis_1[node][cr]<dis) continue;
        // if(cr==1)
        // {
        //     if(dis_1[node][0]<=dis) continue;
        // }
        if(cr==1 and horse[node])
        {
            cr=0;
        }
        for(auto &child:graph[node])
        {
            int n_node=child.first;
            ll wt=child.second;
            if(cr==0) wt/=2;
            if(wt+dis<dis_1[n_node][cr]) 
            {
                if(dis_1[n_node][cr]!=LLONG_MAX)
                {
                    st.erase({dis_1[n_node][cr],{cr,n_node}});
                }
                dis_1[n_node][cr]=wt+dis;
                st.insert({dis_1[n_node][cr],{cr,n_node}});
            }
        }
    }
}

void dijestran(int n)
{
    set<pair<ll,pair<ll,ll>>>st;
    int h=1;
    if(horse[n])
    {
        h=0;
    }
    st.insert({0,{h,n}});
    dis_n[n][h]=0;

    while(st.size())
    {
        auto dd=*(st.begin());
        ll dis=dd.first;
        ll cr=dd.second.first;
        int node=dd.second.second;
        st.erase(dd);

        // if(dis_n[node][cr]<dis) continue;
        // if(cr==1)
        // {
        //     if(dis_n[node][0]<=dis) continue;
        // }
        if(cr==1 and horse[node])
        {
            cr=0;
        }
        for(auto &child:graph[node])
        {
            int n_node=child.first;
            ll wt=child.second;
            if(cr==0) wt/=2;
            if(wt+dis<dis_n[n_node][cr]) 
            {
                if(dis_n[n_node][cr]!=LLONG_MAX)
                {
                    st.erase({dis_n[n_node][cr],{cr,n_node}});
                }
                dis_n[n_node][cr]=wt+dis;
                st.insert({dis_n[n_node][cr],{cr,n_node}});
            }
        }
    }
}


void solve()
{

    int n,m,h;
    cin>>n>>m>>h;
    reset(n);
    for(int i=1; i<=h; i++)
    {
        int x;
        cin>>x;
        horse[x]=1;
    }

    for(int i=1; i<=m; i++)
    {
        ll u,v,w;
        cin>>u>>v>>w;
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }

    dijestra1();
    dijestran(n);
    ll ans=LLONG_MAX;
    for(int i=1; i<=n; i++)
    {
        ans=min(ans,max(min(dis_1[i][0],dis_1[i][1]),min(dis_n[i][0],dis_n[i][1])));
    }
    if(ans>=LLONG_MAX) cout<<-1<<endl;
    else cout<<ans<<endl;

    
    
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