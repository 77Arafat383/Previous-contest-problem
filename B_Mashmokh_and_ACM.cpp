//**************BISMILLAHIR RAHMANIR RAHIM****************
//*******************Md Yeasin Arafat****************
#include<bits/stdc++.h>
using namespace std;
#define    ll               long long
#define en '\n'
const int M =  1e9+7;
const int N = 2e3+5;

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<vector<ll>> dp(k + 1, vector<ll>(n + 1, 0));
    
    
    for (ll j = 1; j <= n; j++) 
    {
        dp[1][j] = 1;
    }
    
   
    for (ll i = 2; i <= k; i++) 
    {
        for (ll j = 1; j <= n; j++) 
        {
            for (ll d = j; d <= n; d += j) 
            {
                dp[i][j] = (dp[i][j] + dp[i - 1][d]) % M;
            }
        }
    }
    
   
    ll ans = 0;
    for (ll j = 1; j <= n; j++) 
    {
        ans = (ans + dp[k][j]) % M;
    }
    
    cout << ans << en;
}

signed main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);
    int ttt = 1;
    //cin >> ttt;
    for (int tt = 1; tt <= ttt; tt++) {
        solve();
    }
    return 0;
}
