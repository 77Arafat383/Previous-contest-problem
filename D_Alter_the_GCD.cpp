#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 9;
using ll = long long;

int a[2][N], p[2][N], s[2][N];
void solve() {
  int n; cin >> n;
  for (int k = 0; k < 2; k++) // 0 th base e a er gula 1 base e 2nd array er gula nitache.. 
   {  
    for (int i = 1; i <= n; i++) {
      cin >> a[k][i];   
      p[k][i] = __gcd(p[k][i - 1], a[k][i]);  // prefix of gcd.. 
    }
  }
  for (int k = 0; k < 2; k++) {
    s[k][n + 1] = 0;
    for (int i = n; i >= 1; i--) {
      s[k][i] = __gcd(s[k][i + 1], a[k][i]); // suffix of gcd.. 
    }
  }
  vector<pair<array<int, 2>, int>> v;   // array is a container. which fixed size array.. 
  long long mx = 0, cnt = 0;     // mx take maximum element. and cnt make how many time this maximum element we find. 
  for (int i = 1; i <= n; i++) // 1 to n pojjontw sob gular jonno check kortachi.. 
  {
    vector<pair<array<int, 2>, int>> nxt;   // i'th index er jonno array.. 
    nxt.push_back({{a[0][i], a[1][i]}, 1});   // pair er 1st dui index arr1 and arr2 er man for i'th index.
    for (auto [p, c]: v) {  // bahire jeta ache setar jonno iteration kortachi. p pair, c cnt.. 
      int x0 = __gcd(a[0][i], p[0]);
      int x1 = __gcd(a[1][i], p[1]);
      array<int, 2> cur = {x0, x1};
      if (cur != nxt.back().first) {
        nxt.push_back({cur, c});
      } else {
        nxt.back().second += c;
      }
    }
   
    v = nxt;
    int st = i;
    for (auto [x, c]: v) {
      auto f = [&](int j) {
        int x0 = __gcd(__gcd(p[0][j - 1], x[1]), s[0][i + 1]);
        int x1 = __gcd(__gcd(p[1][j - 1], x[0]), s[1][i + 1]);
        return x0 + x1;
      };
      st -= c;
      int g = f(st + 1);
      int l = st + 1, r = st + c, cur = 1;
      while (l <= r) {
        int mid = l + r >> 1;
        if (f(mid) == g) {
          cur = mid - st;
          l = mid + 1;
        } else {
          r = mid - 1;
        }
      }
      if (g == mx) {
        cnt += cur;
      } else if (g > mx) {
        mx = g; cnt = cur;
      }
    }
  }
  cout << mx << ' ' << cnt << '\n';
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}