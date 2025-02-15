//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
#define Judge(x) x==0 ? cout<<"NO\n" : cout<<"YES\n";
#define judge(x) x==0 ? cout<<"No\n" : cout<<"Yes\n";
#define en '\n'
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
#define printmv(a) for(auto [x,v]:a) cout<<x<<endl, printv(v)
#define bitcount(x) __builtin_popcount(x)
const int N=1e5;


void build(int node, int l, int r,vector<int>&v ,vector<pair<int,int>>&tree)
{
     if(l==r)
     {
        tree[node]={v[l],0};
        return;
     }
     ll mid=(l+r)/2;
     ll left=node*2;
     ll right=left+1;
     build(left,l,mid,v,tree);
     build(right,mid+1,r,v,tree);
}

void update(int node, int l, int r, int &l1, int &r1, vector<pair<int,int>>&tree)
{
   // cout<<node<<en;
    if(r<l1 or l>r1)
    {
        
       // tree[node].second++;
        return;
    }
    if(l>=l1 and r<=r1)
    {
        
        tree[node].second++;
        return;
        
    }
    
    ll mid=(l+r)/2;
    ll left=node*2;
    ll right=left+1;
    update(left,l,mid,l1,r1,tree);
    update(right,mid+1,r,l1,r1,tree);
}

ll query(int node, int l, int r, int idx,vector<pair<int,int>>&tree)
{
    if(r<idx or l>idx)
    {
       // tree[node].second++;
        return 0;
    }
    if(r==l)
    {
         while(tree[node].second-- and tree[node].first>=10)
         {
            ll num=0;
            ll value=tree[node].first;
            while(value)
            {
                num+=value%10;
                value/=10;
            }
            tree[node].first=num;
         }
         tree[node].second=0;
         return tree[node].first;
    }

    ll ans=0;

    ll mid=(l+r)/2;
    ll left=node*2;
    ll right=left+1;
    tree[left].second+=tree[node].second;
    tree[right].second+=tree[node].second;
    tree[node].second=0;
    ans+=query(left,l,mid,idx,tree);
    ans+=query(right,mid+1,r,idx,tree);
    return ans;

}


void solve()
{
    int n,q;
    cin>>n>>q;
    vector<int>v(n+1);
    for(int i=1; i<=n; i++) cin>>v[i];
    vector<pair<int,int>>tree(4*n+10,{0,0});
    build(1,1,n,v,tree);
    w(q)
    {
        int key;
        cin>>key;
        if(key==1)
        {
             int l1,r1;
             cin>>l1>>r1;
             update(1,1,n,l1,r1,tree);
        }
        else
        {
           int idx;
           cin>>idx;
           cout<<query(1,1,n,idx,tree)<<en;
        }
    }
    
    
}


signed main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int ttt=1;
cin>>ttt;
for(int tt=1; tt<=ttt; tt++) 
{
//cout<<"Case #"<<tt<<": ";
solve();
}
    return 0;
}