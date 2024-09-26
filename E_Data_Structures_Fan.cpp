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
const int N=1e5+10;
string str;


vector<pair<int,int>>tree(5*N);
int change[5*N];

vector<int>v(N);
void segment_tree(int node,int st, int en)
{
    if(st==en)
    {
         if(str[st-1]=='1')
         {
            tree[node].first=0;
            tree[node].second=v[st];
            
         }
         else
         {
            tree[node].first=v[st];
            tree[node].second=0;
         }
       
        change[node]=0;
         return;
    }
    int mid=st+(en-st)/2;
    int left=node*2;
    int right=left+1;
    segment_tree(left,st,mid);
    segment_tree(right,mid+1,en);
    tree[node].first=(tree[left].first^tree[right].first);
    tree[node].second=(tree[left].second^tree[right].second);
    change[node]=0;


}

void update_seg(int node, int st, int en, int l, int r,int prop)
{
   if(st>r or en<l)
   {
    change[node]=prop;
    return;
   }
   if(st>=l and en<=r)
   {
        change[node]=prop+1;
         change[node]=((change[node]&1)? 1: 0);
           if(change[node])
           {
            swap(tree[node].first,tree[node].second);

           }
           
      
     
      return;
   }
   prop+=change[node];
   change[node]=0;
  
    int mid=st+(en-st)/2;
    int left=node*2;
    int right=left+1;
    update_seg(left,st,mid,l,r,prop);
    update_seg(right,mid+1,en,l,r,prop);
    tree[node].first=tree[left].first^tree[right].first;
    tree[node].second=tree[left].second^tree[right].second;
}





void solve()
{
    int n;
    
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>v[i];
    }
    cin>>str;
    segment_tree(1,1,n);
    int q;
    cin>>q;
    w(q)
    {
        int x;
        cin>>x;
        if(x==1)
        {
            int l,r;
            cin>>l>>r;
            update_seg(1,1,n,l,r,0);
        }
        else 
        {
            int i;
            cin>>i;
            if(i==1)
            {
                cout<<tree[1].second<<" ";

            }
            else
            {
                cout<<tree[1].first<<" ";
            }
        }
    }
    tree.clear();
    v.clear();
    cout<<"\n";
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
cin>>t;
w(t) solve();
    return 0;
}