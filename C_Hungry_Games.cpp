#include <bits/stdc++.h>


using namespace std;
typedef long long int ll;
const ll md=1e9+7;
const ll md1=998244353;
map<ll,vector<int>>mp;
double dp[3000][3000];

void sufi(){
   ll n,k;
   cin>>n>>k;
   ll ara[n+1];
   for(int i=1;i<=n;i++)cin>>ara[i];
   ll pre[n+3]={0};
   for(int i=1;i<=n;i++)pre[i]+=pre[i-1]+ara[i];
   ll ans=(n*(n+1))/2;
   ll mn[n+5]={0};
   for(ll i=n;i>=1;i--)
   {
        if(ara[i]>k){
            mn[i]=1+mn[i+1];
            continue;
        }
        int l=i;
        int h=n;
        while(h-l>1){
            int mid=(h+l)/2;
            if(pre[mid]-pre[i-1]<=k)l=mid;
            else h=mid-1;
        }
        int t;
        if(pre[h]-pre[i-1]<=k)
        {
            if(h==n){
                mn[i]=0;
                continue;
            }
            mn[i]=1+mn[h+2];
            continue;
        }
        mn[i]=1+mn[l+2];
        continue;
   }
   for(int i=1;i<=n;i++)ans-=mn[i];
   cout<<ans<<endl;
}

int main(){
   int t;//=1;
   cin>>t;
while(t--){

    sufi();
}

}
