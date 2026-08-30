#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    if (!(cin >> t)) return 0;
    while (t--) {
        int n; cin >> n;
        if (n == 2) {
            cout << "-1 2\n";
            continue;
        }
        if (n == 3) {
            cout << "-1 3 -1\n";
            continue;
        }
        // n >= 4
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 1) cout << -1;
            else cout << 2;
            if (i < n) cout << ' ';
        }
        cout << '\n';
    }
    return 0;
}
