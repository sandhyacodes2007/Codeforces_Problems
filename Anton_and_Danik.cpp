#include <bits/stdc++.h>
using namespace std;

const int MOD = 676767677;

struct Node {
    long double logv;
    int val;

    bool operator<(const Node &o) const {
        return logv < o.logv;
    }
};

int main() {

    int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> a(n);
        for (int &x : a) cin >> x;

        vector<multiset<Node>> ms(101);

        for (int x : a) {
            int best = -1;
            Node cur;

            for (int v = 1; v <= x; v++) {
                if (!ms[v].empty()) {
                    auto it = ms[v].begin();
                    if (best == -1 || it->logv < cur.logv) {
                        cur = *it;
                        best = v;
                    }
                }
            }

            if (best == -1) {
                ms[x].insert({log((long double)x), x % MOD});
            } else {
                ms[best].erase(ms[best].begin());
                ms[x].insert({
                    cur.logv + log((long double)x),
                    (int)((1LL * cur.val * x) % MOD)
                });
            }
        }

        long long ans = 0;
        for (int v = 1; v <= 100; v++) {
            for (auto &e : ms[v]) {
                ans = (ans + e.val) % MOD;
            }
        }

        cout << ans << '\n';
    }
}