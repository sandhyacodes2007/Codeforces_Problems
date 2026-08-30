#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<pair<int, int>> points(n); // stores (x, y)
        vector<int> index(n);             // stores original indices

        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
            index[i] = i + 1;
        }

        // Sort by x + y to push distant points to opposite ends
        vector<pair<pair<int, int>, int>> sorted;
        for (int i = 0; i < n; ++i) {
            sorted.push_back({points[i], index[i]});
        }

        sort(sorted.begin(), sorted.end(), [](auto &a, auto &b) {
            return a.first.first + a.first.second < b.first.first + b.first.second;
        });

        // Pair smallest with largest, second smallest with second largest, etc.
        for (int i = 0; i < n / 2; ++i) {
            int a = sorted[i].second;
            int b = sorted[n - 1 - i].second;
            cout << a << " " << b << '\n';
        }
    }

    return 0;
}
