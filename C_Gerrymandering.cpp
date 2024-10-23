#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 9;
using ll = long long;

string s[2];
int n, dp[N][3];
int ok(int i1, int j1, int i2, int j2, int i3, int j3) {
  return ((s[i1][j1] == 'A') + (s[i2][j2] == 'A') + (s[i3][j3] == 'A')) >= 2;
}
int yo(int i, int j) {
  if (i == n) return 0;
  int &ret = dp[i][j];
  if (ret != -1) return ret;
  ret = 0;
  if (j == 0) {
    if (i + 3 <= n) {
      ret = ok(0, i, 0, i + 1, 0, i + 2) + ok(1, i, 1, i + 1, 1, i + 2) + yo(i + 3, 0);
    }
    if (i + 2 < n) {
      ret = max(ret, ok(0, i, 1, i, 1, i + 1) + yo(i + 2, 1));
      ret = max(ret, ok(0, i, 0, i + 1, 1, i) + yo(i + 2, 2));
    }
  } else if (j == 1) {
    if (i + 3 < n) {
      ret = ok(0, i - 1, 0, i, 0, i + 1) + ok(1, i, 1, i + 1, 1, i + 2) + yo(i + 3, 1);
    }
    if (i + 1 <= n) {
      ret = max(ret, ok(0, i - 1, 0, i, 1, i) + yo(i + 1, 0));
    }
  } else {
    if (i + 3 < n) {
      ret = ok(1, i - 1, 1, i, 1, i + 1) + ok(0, i, 0, i + 1, 0, i + 2) + yo(i + 3, 2);
    }
    if (i + 1 <= n) {
      ret = max(ret, ok(1, i - 1, 1, i, 0, i) + yo(i + 1, 0));
    }
  }
  return ret;
}
void solve() {
  cin >> n;
  cin >> s[0] >> s[1];
  for (int i = 0; i <= n; i++) {
    for (int j = 0; j < 3; j++) {
      dp[i][j] = -1;
    }
  }
  cout << yo(0, 0) << '\n';
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