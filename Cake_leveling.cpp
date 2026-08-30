#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long sixseven = 0;

        for (int i = 0; i < n; i++) {
            sixseven += a[i];
            cout << sixseven / (i + 1) << " ";
        }
        cout << '\n';
    }

    return 0;
}