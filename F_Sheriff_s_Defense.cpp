#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

ll dp[200001][2];

map<ll,vector<ll>>tree;
void ok(int i,ll ara[],ll c,int vis[]){

vis[i]++;
ll tmp1=0;
ll tmp2=0;
for(auto it:tree[i]){
    if(!vis[it]){
        ok(it,ara,c,vis);

    tmp1+=max(0ll,max(dp[it][0],dp[it][1]-2*c));
    tmp2+=max(0ll,max(dp[it][0],dp[it][1]));
    }

}
tmp1+=ara[i];
dp[i][1]=max(0ll,tmp1);
dp[i][0]=max(0ll,tmp2);

}
void sufi() {
    tree.clear();
 ll n,c;
 cin>>n>>c;
 ll ara[n+1];
 for(int i=1;i<=n;i++)cin>>ara[i];
 for(int i=1;i<n;i++){
    ll x,y;
    cin>>x>>y;
    tree[x].push_back(y);
    tree[y].push_back(x);
 }
 for(int i=1;i<=n;i++){
    dp[i][0]=-1e17;
    dp[i][1]=-1e17;
 }
 int vis[n+1]={0};
ok(1,ara,c,vis);
cout<<max(dp[1][0],dp[1][1])<<endl;

}

int main() {

    ll t = 1;
   cin>>t;
    while (t--) {
      sufi();

    }
    return 0;
}
