#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

vector<vector<pair<int, int>>> adj;
vector<bool> visited;
int maxDist, farthestNode;

void dfs(int node, int dist) {
    visited[node] = true;
    if (dist > maxDist) {
        maxDist = dist;
        farthestNode = node;
    }
    for (auto &neighbor : adj[node]) {
        if (!visited[neighbor.first]) {
            dfs(neighbor.first, dist + neighbor.second);
        }
    }
}

int findTreeDiameter(int n) {
    visited.assign(n, false);
    maxDist = -1;
    dfs(0, 0);  
    visited.assign(n, false);
    maxDist = -1;
    dfs(farthestNode, 0); 
    return maxDist;
}

int main() {
    int T;
    cin >> T;
    for (int t = 1; t <= T; ++t) {
        int n;
        cin >> n;
        adj.assign(n, vector<pair<int, int>>());
        for (int i = 0; i < n - 1; ++i) {
            int u, v, w;
            cin >> u >> v >> w;
            adj[u].emplace_back(v, w);
            adj[v].emplace_back(u, w);
        }
        cout << "Case " << t << ": " << findTreeDiameter(n) << endl;
    }
    return 0;
}
