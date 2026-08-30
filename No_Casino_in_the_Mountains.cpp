
#include <bits/stdc++.h>
using namespace std;

int maxHikes(int n, int k, const vector<int>& a) {
    int i = 0, count = 0;
    while (i <= n - k) {
        bool canHike = true;
        for (int j = 0; j < k; j++) {
            if (a[i + j] == 1) {
                canHike = false;
                break;
            }
        }
        if (canHike) {
            count++;
            i += k + 1; // k days of hike + 1 day rest
        } else {
            i++;
        }
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << maxHikes(n, k, a) << "\n";
    }
    return 0;
}
