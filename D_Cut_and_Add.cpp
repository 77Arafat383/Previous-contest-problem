#include <iostream>
#include <vector>
using namespace std;

const int MAX_NODES = 2000000;

vector<int> tree[MAX_NODES+2];
int entry[MAX_NODES+2], exiting[MAX_NODES+2];
int timer = 0;

void dfs(int node, int parent) {
    entry[node] = timer++;
    for (int child : tree[node]) {
        if (child != parent)
            dfs(child, node);
    }
    exiting[node] = timer++;
}


bool isAncestor(int u, int v)  {
    return entry[u] <= entry[v] && exiting[u] >= exiting[v];
}

int main() {
    int n, q;
   
    cin >> n;

   
   
    for (int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        tree[u].push_back(v);
        tree[v].push_back(u);
    }

    
    dfs(1, -1); 

   
    cin>>q;
    for (int i = 0; i < q; i++) {
        int u, v;
        cin >> u >> v;
        if (isAncestor(u, v))
            cout<<"NO\n";
        else
           cout<<"YES\n";
    }

    return 0;
}
