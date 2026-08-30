#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;



void solve() {
    int n, m;
    cin >> n >> m;
    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    sort(a.rbegin(), a.rend());
    int k = min(n, m);
    long long ans = 0;
    for (int i = 0; i < k; i++) {
        ans += a[i] * (m - i);
    }
    
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}