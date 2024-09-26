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
//vector<ll>vis(N,0);
vector<ll>s_segment(4*N);

void generate(int node, int st, int en)
{
    if(st==en)
    {
        s_segment[node]=0;
        return;
    }

    int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    generate(left, st, mid);
    generate(right,mid+1,en);
    s_segment[node]=s_segment[left]+s_segment[right];
    return;
}

void update(int node, int st, int en, int idx)
{
    if(st>idx or en<idx) return;
    if(st==en) 
    {
        s_segment[node]=1;
        return;

    }
     int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    update(left, st, mid,idx);
    update(right,mid+1,en,idx);
    s_segment[node]=s_segment[left]+s_segment[right];
    return;
}

ll query(int node, int st, int en, int l, int r)
{
    if(st>r or en<l)
    {
        return 0;
    }
    if(st>=l and en<=r)
    {
        return s_segment[node];
    }
    ll sum=0;
     int mid=(st+en)/2;
    int left=node*2;
    int right=left+1;
    sum+=query(left, st, mid,l,r);
    sum+=query(right,mid+1,en,l,r);
    return sum;
    
}


void solve()
{
    int n;
    cin>>n;
    generate(1,1,n);
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
        cout<<query(1,1,n,x+1,n)<<" ";
        update(1,1,n,x);

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