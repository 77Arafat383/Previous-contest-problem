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
vector<ll>v(N);
struct segment
{
   ll lo;
   ll hi;
   ll cnt;
};

segment s_tree[4*N];
void generate(int node, int st, int en)
{
    if(st==en)
    {
        s_tree[node].lo=v[st];
        s_tree[node].hi=v[en];
        s_tree[node].cnt=1;
        return;
    }
    int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    generate(left,st,mid);
    generate(right,mid+1,en);
    s_tree[node].hi=max(s_tree[left].hi,s_tree[right].hi);
    s_tree[node].lo=min(s_tree[left].lo,s_tree[right].lo);
    s_tree[node].cnt=s_tree[left].cnt+s_tree[right].cnt;
    return;
}

void update(int node, int st, int en, int idx, ll value)
{
    if(st>idx or en<idx) return;
     if(st==en)
    {
        v[st]=value;
        s_tree[node].lo=v[st];
        s_tree[node].hi=v[en];
        s_tree[node].cnt=1;
        return;
    }
    int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    update(left,st,mid,idx,value);
    update(right,mid+1,en,idx,value);
    s_tree[node].hi=max(s_tree[left].hi,s_tree[right].hi);
    s_tree[node].lo=min(s_tree[left].lo,s_tree[right].lo);
    s_tree[node].cnt=s_tree[left].cnt+s_tree[right].cnt;
    return;
}

ll query(int node, int st, int en, ll l, ll r)
{
     if(s_tree[node].lo>r or s_tree[node].hi<l) return 0;
     if(s_tree[node].lo>=l and s_tree[node].hi<=r)
    {
        return s_tree[node].cnt;
    }
    int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    ll ans=0;
   ans+= query(left,st,mid,l,r);
   ans+= query(right,mid+1,en,l,r);
    
    
    return ans;


}


void solve()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++) cin>>v[i];
    generate(1,1,n);
    w(m)
    {
        char ch;
        cin>>ch;
        if(ch=='!')
        {
           ll idx, value;
            cin>>idx>>value;
            update(1,1,n,idx,value);
        }
        else
        {
            ll l,r;
            cin>>l>>r;
            cout<<query(1,1,n,l,r)<<endl;

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