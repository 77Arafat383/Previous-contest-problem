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

void build(ll node,ll l, ll r, vector<ll>&v, vector<char>&str,vector<pair<ll,ll>>&tree )
{
    if(l==r)
    {
        if(str[l]=='0')
        {
            tree[node]={v[l],0};
        }
        else
        {
            tree[node]={0,v[l]};
        }
        return;
    }

    ll mid=(l+r)/2;
    ll left=node*2;
    ll right=left+1;
    build(left,l,mid,v,str,tree);
    build(right,mid+1,r,v,str,tree);
    tree[node].first=(tree[left].first^tree[right].first);
    tree[node].second=(tree[left].second^tree[right].second);
    return;
}

void update(ll node, ll l, ll r, ll &l1, ll &r1,vector<pair<ll,ll>>&tree,vector<int>&change , int key )
{
    if(r<l1 or l>r1) 
    {
        if(key%2==0)
        swap(tree[node].first,tree[node].second);
        change[node]+=key-1;
        return;
    }
    if(l>=l1 and r<=r1)
    {
       
        change[node]+=key;
      //  cout<<node<<' '<<change[node]<<en;
       // cout<<l<<' '<<r<<en;
       // cout<<tree[node].first<<en;
       if(key&1)
         swap(tree[node].first,tree[node].second);
       // cout<<tree[node].first<<en;
       
        return;
    }
    

    ll mid=(l+r)/2;
    ll left=node*2;
    ll right=left+1;
    update(left,l,mid,l1,r1,tree,change,(change[node]+key));
    update(right,mid+1,r,l1,r1,tree ,change,(change[node]+key));
    tree[node].first=(tree[left].first^tree[right].first);
    tree[node].second=(tree[left].second^tree[right].second);
    change[node]=0;
    return;

}



void solve()
{
    ll n;
    cin>>n;
    vector<ll>v(n+1);
    vector<char>str(n+1);

    for(ll i=1; i<=n; i++) cin>>v[i];
    for(ll i=1; i<=n; i++) cin>>str[i];
    vector<pair<ll,ll>>tree(10*n+10);
    vector<int>change(4*n+10,0);
    build(1,1,n,v,str,tree);
    ll q;
    cin>>q;
    while(q--)
    {
       ll key;
       cin>>key;
       if(key==1)
       {
          ll l1,r1;
          cin>>l1>>r1;
         // cout<<tree[1].first<<en;
          update(1,1,n,l1,r1,tree,change,1);
          //cout<<tree[1].first<<en;
       }
       else
       {
          ll x;
          cin>>x;
          if(x==0)
          {
            cout<<tree[1].first<<' ';
          }
          else
          {
            cout<<tree[1].second<<' ';
          }
       }
    }
    cout<<en;
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