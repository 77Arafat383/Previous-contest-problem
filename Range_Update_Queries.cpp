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
const int N=2e6+2;

struct name{
    ll first;
   ll second;
}tree[N];


ll v[N];

void create(int node,int st, int en)
{
    if(st==en)
    {
        tree[node].first=v[st];
        tree[node].second=0;
        return;
    }
    int left=(node<<1);
    int right=(node<<1)+1;
    int mid=(st+en)/2;
    create(left,st,mid);
    create(right,mid+1,en);
    tree[node].first=tree[left].first+tree[right].first;
    tree[node].second=0;

    return;
}

void  update(int node, int st, int en, int l, int r, ll value)
{
    if(st>r or en<l)
    {
        return;
    }
    if(st>=l and en<=r)
    {
        tree[node].first+=(en-st+1)*1LL*value;
        tree[node].second+=value;
        return;
    }
    int left=(node<<1);
    int right=(node<<1)+1;
    int mid=(st+en)/2;
    update(left, st, mid, l, r,value);
    update(right, mid+1,en, l,r,value);
    tree[node].first=tree[left].first+tree[right].first+(en-st+1)*1LL*tree[node].second;
    return;
}

ll query(int node, int st, int en, int l, int r, ll carry)
{
    if(st>r or en<l)
    {
        return 0;
    }
    if(st>=l and en<=r)
    {

        return tree[node].first+carry*1LL*(en-st+1);
    }
    int left=(node<<1);
    int right=(node<<1)+1;
    int mid=(st+en)/2;
    ll num=0;
    num+=query(left, st, mid, l, r,carry+tree[node].second);
   num+=query(right, mid+1,en, l,r,carry+tree[node].second);

    return num;

}


void solve()
{
    ll n,q;
    cin>>n>>q;
    for(int i=1; i<=n; i++) cin>>v[i];
    create(1,1,n);
    w(q)
    {
        int x;
        cin>>x;
        if(x==2)
        {
            int k;
            cin>>k;
            cout<<query(1,1,n,k,k,0)<<endl;

        }
        else
        {
            ll l,r,value;
            cin>>l>>r>>value;
            update(1,1,n,l,r,value);
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
