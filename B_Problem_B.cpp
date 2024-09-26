//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
#define check cout<<"asce\n";
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=2e5+2;
int k;
vector<int>dp(N,0);
vector<int>seg(N*4);

void segment_tree(int node,int st, int en)
{
   
    if(st==en)
    {
        if(dp[st]>=k) seg[node]=1;
        return;
    }
   int left=node*2;
   int right=left+1;
   int mid=(st+en)/2;
   segment_tree(left,st,mid);
   segment_tree(right,mid+1,en);
   seg[node]=seg[left]+seg[right];
   return;

}

ll query(int node, int st, int en, int l, int r)
{
    if(st>r or en<l) return 0;
    if(st>=l and en<=r) return seg[node];
    int left=node*2;
    int right=left+1;
    int mid=(st+en)/2;
    ll ans=0;
    ans+= query(left,st,mid,l,r);
    ans+= query(right,mid+1,en,l,r);
   
   return ans;
}



void solve()
{
    int n,q;
    cin>>n>>k>>q;
    for(int i=1; i<=n; i++)
    {
        int l,r;
        cin>>l>>r;
        r+=1;
        dp[l]+=1;
        dp[r]-=1;
    }
    for(int i=1; i<N; i++)
    {
        dp[i]+=dp[i-1];
    }

   segment_tree(1,1,N-1);
 
    w(q)
    {
       
        int l,r;
        cin>>l>>r;
        ll ans=query(1,1,N-1,l,r);
        cout<<ans<<endl;
    }
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
w(t) solve();
    return 0;
}