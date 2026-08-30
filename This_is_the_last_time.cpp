#include <bits/stdc++.h>
using namespace std;

struct Casino {
    int l, r, real;
};

int solve(int n, int k, vector<Casino>& casinos) {
    sort(casinos.begin(), casinos.end(), [](const Casino& a, const Casino& b) {
        return a.l < b.l;
    });

    int currCoins = k;
    int i = 0;
    priority_queue<pair<int, int>> pq; // max-heap of (real, r)

    while (true) {
        // Add all casinos where l <= currCoins
        while (i < n && casinos[i].l <= currCoins) {
            pq.emplace(casinos[i].real, casinos[i].r);
            i++;
        }

        if (pq.empty()) break;

        auto [real, r] = pq.top();
        pq.pop();

        if (currCoins <= r) {
            currCoins = real;
        } else {
            // This casino's r is less than currCoins, so it's invalid now
            continue;
        }
    }

    return currCoins;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<Casino> casinos(n);
        for (int i = 0; i < n; ++i) {
            cin >> casinos[i].l >> casinos[i].r >> casinos[i].real;
        }
        cout << solve(n, k, casinos) << '\n';
    }

    return 0;
}