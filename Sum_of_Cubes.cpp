#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<long long> cubes;

    for (long long i = 1; i * i * i <= 1000000000000LL; i++) {
        cubes.insert(i * i * i);
    }

    int t;
    cin >> t;

    while (t--) {
        long long x;
        cin >> x;

        bool ok = false;

        for (long long i = 1; i * i * i <= x; i++) {
            if (cubes.count(x - i * i * i)) {
                ok = true;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << '\n';
    }

    return 0;
}