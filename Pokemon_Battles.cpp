#include <bits/stdc++.h>
//#include "debug.h"
using namespace std;
//define
#define ll long long int
#define ld long double
#define ull unsigned long long
#define pb push_back
#define TT int t; cin >> t; for (int tt = 1; tt <= t; tt++)
#define LO cout << "Case " << tt << ": ";
#define fastio ios_base::sync_with_stdio(0); cin.tie(0);
#define PR(ans) (ans) ? cout << "YES\n" : cout << "NO\n";
#define msort(cont) sort(cont.begin(), cont.end());
//constants
const ll M = 1e9 + 7;
const int N = 1e6 + 3;


//main
int main()
{
    fastio
    TT {
        ll n;
        cin>>n;
        vector<ll>mx(n),g(n);
        vector<pair<ll,ll>>v;
        for(ll i = 0;i<n;i++){
            cin>>g[i];
        }
        for(ll i = 0;i<n;i++){
            ll num;
            cin>>num;
            v.pb({g[i],num});
        }
        msort(v)
        ll tmp = 0;
        for(ll i = n-1;i>=0;i--){
            tmp = max(tmp,v[i].second);
            mx[i] = tmp;
        }
        ll cnt = 0;
        for(ll i = 0;i<n;i++){
            if(v[i].second>=mx[i])cnt++;
        }
        cout<<cnt<<'\n';
    }
}