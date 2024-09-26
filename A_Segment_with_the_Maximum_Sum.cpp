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

const int N=4e6;
struct name
{
    ll seg;
    ll pref;
    ll suf;
    ll sum;

}idx[N];

void create(vector<ll> &v , int node, int st, int en)
{
    if(st==en)
    {
        if(v[st]<0)
        {
            idx[node].seg=0;
            idx[node].pref=0;
            idx[node].suf=0;
            idx[node].sum=v[st];
        }
        else
        {
             idx[node].seg=v[st];
            idx[node].pref=v[st];
            idx[node].suf=v[st];
            idx[node].sum=v[st];
        }

        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(st+en)/2;
    create(v,left,st,mid);
    create(v,right,mid+1,en);
    idx[node].seg=max({idx[left].seg,idx[right].seg,idx[left].suf+idx[right].pref});
    idx[node].pref=max(idx[left].pref,idx[left].sum+idx[right].pref);
    idx[node].suf=max(idx[right].suf,idx[right].sum+idx[left].suf);
    idx[node].sum=idx[left].sum+idx[right].sum;
}

void update(vector<ll>&v,int node, int st, int en, int x, ll value)
{
    if(st>x or en<x)
    {
        return;
    }
    if(st==en)
    {
        if(value<0)
        {
            idx[node].seg=0;
            idx[node].pref=0;
            idx[node].suf=0;
            idx[node].sum=value;
        }
        else
        {
             idx[node].seg=value;
            idx[node].pref=value;
            idx[node].suf=value;
            idx[node].sum=value;
        }

        return;
    }
    int left=node*2;
    int right=left+1;
    int mid=(st+en)/2;
    update(v,left,st,mid, x,value);
    update(v,right,mid+1,en, x, value);
    idx[node].seg=max({idx[left].seg,idx[right].seg,idx[left].suf+idx[right].pref});
    idx[node].pref=max(idx[left].pref,idx[left].sum+idx[right].pref);
    idx[node].suf=max(idx[right].suf,idx[right].sum+idx[left].suf);
    idx[node].sum=idx[left].sum+idx[right].sum;
}

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<ll>v(n+1);
    for(int i=1; i<=n; i++)
    cin>>v[i];

    create(v,1,1,n);
    cout<<idx[1].seg<<endl;
    w(m)
    {
        ll i,value;
        cin>>i>>value;
        update(v,1,1,n,i+1,value);
        cout<<idx[1].seg<<endl;

    }
    
}


int main()
{
int t;
t=1;
w(t) solve();
    return 0;
}