//**************BISMILLAHIR RAHMANIR RAHIM****************
#include<bits/stdc++.h>
using namespace std;
#define check cout<<'?'<<endl;
#define    ll               long long
const int M =  1e9+7;
#define    all(x)           x.begin(), x.end()
#define    w(x)             while(x--)
#define    pi               acos(-1.00)
#define rev(v) reverse(all(v));
#define printv(a)  for(auto it:a) cout<<it<<' '; cout<<endl
#define printm(a)  for(auto it:a) cout<<it.first<<' '<<it.second<<endl
const int N=1e5;
int LIS(const vector<int>& A) {
  
  vector<int> dp;
  for (auto&& x: A) {
    int i = lower_bound(all(dp), x) - dp.begin();
    if (i >= int(dp.size())) {
      dp.push_back(x);
    } else {
      dp[i] = x;
    }
  }

  return dp.size();
}

void solve()
{
    int n;
    cin>>n;
    vector<int>a(n),b(n);
    for(auto &it:a) cin>>it;
    for(auto &it:b) cin>>it;
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++) v.push_back({a[i],b[i]});
    sort(all(v));
    
    for(int i=0; i<n; i++)
    {
        a[i]=v[i].first;
        b[i]=v[i].second;
    }
//    printv(a);
//     printv(b);
    ll ans=LIS(a)+LIS(b);
    cout<<ans<<endl;
    
}


int main()
{
 ios_base::sync_with_stdio(false) , cin.tie(NULL);
int t;
t=1;
for(int i=1; i<=t; i++) 
{
//cout<<'t'<<i<<endl;
solve();
}
    return 0;
}