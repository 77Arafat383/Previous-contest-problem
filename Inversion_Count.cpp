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
map<int,int>mp;
ll merge(vector<int>&v, int st, int mid, int en)
{
    vector<int>a,b,tem;
    int n1=mid-st+1;
    int n2=en-mid;
    for(int i=st; i<mid+1; i++)
    {
        a.push_back(v[i]);
    }
    for(int j=mid+1; j<en; j++) b.push_back(v[j]);
    int i=0,j=0;
    while(i<n1 and j<n2)
    {
        if(a[i]<=b[j])
        {
            tem.push_back(a[i]);
            i++;

        }
        else
        {
            tem.push_back(b[i]);
            j++;
            

        }

    }


}
ll mergesort(vector<int>&v, int st, int en)
{
    ll inv=0;
    if(st<en)
    {
        int mid=(st+en)/2;
    inv+=mergesort(v,st,mid);
    inv+=mergesort(v,mid+1,en);
   inv+= merge(v,st,mid,en);
    }
   return  inv;
}

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &it:v) cin>>it;
    vector<int>tem=v;
    cout<<mergesort(v,0,n-1)<<endl;
}


int main()
{
int t;
cin>>t;
w(t) solve();
    return 0;
}