#include <bits/stdc++.h>
using namespace std;

const int N = 400;
using PII = pair<int, int>;

vector<PII> adj[N];

int cost(int u, int p) {
    int ans = 0;
    for (auto [v, w] : adj[u]) {
        if (v == p) continue;
        ans = max(ans, cost(v, u) + w);
    }
    return ans;
}

int main() {
    

    int n;
    cin >> n;

    for (int i = 1; i < n; i++) {
        int u, v, w;
        cin >> u >> v >> w;
        adj[u].emplace_back(v, w);
        adj[v].emplace_back(u, w);
    }
    cout << cost(0, 0) << endl;
}

