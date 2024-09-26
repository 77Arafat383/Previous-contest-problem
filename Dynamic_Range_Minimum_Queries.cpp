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

const int N=2e6+10;
ll tree[N];
ll v[N];
void segment(int node, int st, int en)
{
    if(st==en)
    {
        tree[node]=v[st];
        return;
    }
    int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    segment(left, st, mid);
    segment(right, mid+1, en);
    tree[node]=min(tree[left],tree[right]);
    return;
}

ll query(int node, int st, int en, int l, int r)
{
   
    if(st>r or en<l) return INT_MAX;
    
    if(st>=l and en<=r)
    {
        
        return tree[node];
    }
    

    int left=node*2;
    int right=left+1;
    int mid=(st+en)/2;
    ll num=0;
    num=query(left,st,mid,l,r);
    num=min(num,query(right,mid+1,en,l,r));
    return num;
    

}

void update(int node, int st, int en, int idx, int value)
{
    if(st>idx or en<idx) return;
    if(st==idx and en==idx)
    {
        tree[node]=value;
        return;
    }
    int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    update(left,st,mid,idx,value);
    update(right,mid+1,en,idx,value);
    tree[node]=min(tree[left],tree[right]);
    return;
}

void solve()
{
    int n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>v[i];
    segment(1,1,n);
    while(q--)
    {
       int x;
       cin>>x;
       if(x==2)
       {
        int l,r;
        cin>>l>>r;
        cout<<query(1,1,n,l,r)<<endl;

       }
       else
       {
          int k,u;
          cin>>k>>u;
          update(1,1,n,k,u);
       }
        
    }

    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}