#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (k != 4) {
            int ans = 10;

            for (int x : a) {
                ans = min(ans, (k - x % k) % k);
            }

            cout << ans << '\n';
        }
        else {
            int ans = 10;

            // Option 1: Make one number divisible by 4
            for (int x : a) {
                ans = min(ans, (4 - x % 4) % 4);
            }

            // Option 2: Create enough even numbers
            int even = 0;
            for (int x : a) {
                if (x % 2 == 0)
                    even++;
            }

            ans = min(ans, max(0, 2 - even));

            cout << ans << '\n';
        }
    }

    return 0;
}