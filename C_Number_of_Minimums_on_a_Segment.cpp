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
pair<ll,ll>tree[N*4];
vector<ll>v(N);
void create(int node, int st, int en)
{
    if(st==en)
    {
        tree[node]={v[st],1};
        return;
    }


    int mid=(st+en)/2;
    int left=(node*2);
    int right=left+1;
    create(left,st,mid);
    create(right,mid+1,en);
    if(tree[left].first<tree[right].first)
    {
        tree[node]=tree[left];
    }
    else if(tree[left].first>tree[right].first)
    {
        tree[node]=tree[right];
    }
    else
    {
        tree[node].first=tree[left].first;
        tree[node].second=tree[left].second+tree[right].second;
        
    }

    return;



}

void update(int node, int st, int en,int idx,int value)
{
    if(st>idx or en<idx)
    {
        return;
    }
    if(st==en)
    {
        tree[node]={value,1};
        return;
    }


    int mid=(st+en)/2;
    int left=(node*2);
    int right=left+1;
    update(left,st,mid,idx,value);
    update(right,mid+1,en,idx,value);
    if(tree[left].first<tree[right].first)
    {
        tree[node]=tree[left];
    }
    else if(tree[left].first>tree[right].first)
    {
        tree[node]=tree[right];
    }
    else
    {
        tree[node].first=tree[left].first;
        tree[node].second=tree[left].second+tree[right].second;
        
    }

    return;



}


pair<ll,ll> query(int node,int st, int en, int l, int r)
{
    pair<ll,ll>a1,a2;
    if(st>r or en<l)
    {
        return {LLONG_MAX,0};
    }
    if(st>=l and en<=r)
    {
        return tree[node];
    }
     int mid=(st+en)/2;
    int left=(node*2);
    int right=left+1;
    a1= query(left,st,mid,l,r);
    a2=query(right,mid+1,en,l,r);
    if(a1.first<a2.first)
    {
        return a1;
    }
    else if(a1.first>a2.first)
    {
        return a2;
    }
    else
    {
        return {a1.first,a1.second+a2.second};
        
    }

    

}




void solve()
{
    int n,m;
    cin>>n>>m;
    
    for(int i=1; i<=n; i++) cin>>v[i];
 

    create(1,1,n);
    w(m)
    {
        int x;
        cin>>x;
        if(x==1)
        {
           ll i,value;
            cin>>i>>value;
           update(1,1,n,i+1,value);
        }
        else
        {
            int l, r;
            cin>>l>>r;
            pair<ll,ll>ans=query(1,1,n,l+1,r);
           cout<<ans.first<<" "<<ans.second<<endl;
        }
    }
    // for(int i=1; i<=10; i++)
    // {
    //     cout<<tree[i].first<<" "<<tree[i].second<<endl;
    // }
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}