#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        sort(a.begin(), a.end());
        unordered_set<int> seen;
        bool valid = true;
        
        for (int i = 0; i < n; ++i) {
            int value = a[i] - i;
            if (seen.count(value)) {
                valid = false;
                break;
            }
            seen.insert(value);
        }
        
        if (valid) {
            for (int i = 0; i < n; ++i) {
                cout << a[i] << " ";
            }
            cout << endl;
        } else {
            cout << -1 << endl;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}