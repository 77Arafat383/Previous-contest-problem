#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
template<class T>bool chmax(T &a, const T &b) { if (a<b) { a=b; return true; } return false; }
template<class T>bool chmin(T &a, const T &b) { if (b<a) { a=b; return true; } return false; }
#define all(x) (x).begin(),(x).end()
#define fi first
#define se second
#define mp make_pair
#define si(x) int(x.size())
const int mod=998244353,MAX=300005,INF=15<<26;
void solve()
{
    int n,k;
    cin>>n>>k;
    vector<ll>v(n);
    for(int i=0; i<n; i++) cin>>v[i];
    sort(all(v));
    for(int i=0; i<n-1; i++)
    {
        if(v[i]+k<=v.back())
        {
            ll tem=v.back()-(v[i]+k);
            tem=(tem+2*k-1)/(2*k);
            v[i]+=tem*(2*k);
        }
    }
    sort(all(v));
    for(int i=0; i<n; i++) v.push_back(v[i]+(2*k));
    ll ans=LLONG_MAX;
    for(int i=n-1; i<n+n; i++)
    {
        if(v[i]-v[i-(n-1)]<k) 
        {
            ans=min(ans,v[i]);
        }
    }
    if(ans==LLONG_MAX) cout<<-1<<'\n';
    else cout<<ans<<'\n';
    return;
}
int main(){
    
    std::ifstream in("text.txt");
    std::cin.rdbuf(in.rdbuf());
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    int Q;cin>>Q;
    while(Q--){
        solve();
        
    }
}
