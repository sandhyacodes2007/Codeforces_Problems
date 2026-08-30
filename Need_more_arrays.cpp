#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    
    int res = 0;
    int last = -1; 
    for (int i = 0; i < n; ) {
        if (a[i] > last + 1) {
            res++;
            last = a[i];
            i++;
        } else {
            int j = i;
            int current_last = last;
            while (j < n && a[j] <= current_last + 1) {
                j++;
            }
            if (j < n) {
                res++;
                last = a[j];
                i = j + 1;
            } else {
                break;
            }
        }
    }
    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}