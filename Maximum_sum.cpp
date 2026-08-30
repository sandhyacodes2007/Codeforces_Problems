#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        // prefix[i] = sum of a[0] ... a[i-1]
        vector<long long> prefix(n + 1, 0);

        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + a[i];
        }

        long long ans = 0;

        for (int i = 0; i <= k; i++) {
            // Remove 2*i smallest elements
            int l = 2 * i;

            // Remove (k-i) largest elements
            int r = n - (k - i);

            // Remaining elements are a[l] ... a[r-1]
            long long sum = prefix[r] - prefix[l];

            ans = max(ans, sum);
        }

        cout << ans << '\n';
    }
}