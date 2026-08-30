#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<long long> a(n + 1);
        for (int i = 1; i <= n; i++) cin >> a[i];

        vector<bool> mark(n + 1, false);
        for (int i = 0; i < m; i++) {
            int b; cin >> b;
            mark[b] = true;
        }

        long long plus = 0, minus = LLONG_MIN / 2;

        for (int i = n; i >= 1; i--) {
            if (mark[i]) {
                long long best = max(plus, minus);
                plus  = best + a[i];
                minus = best - a[i];
            } else {
                plus  += a[i];
                minus -= a[i];
            }
        }

        cout << max(plus, minus) << "\n";
    }
}