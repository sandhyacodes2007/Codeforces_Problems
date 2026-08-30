#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t; cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        int i = 0;
        while (i < n && a[i] == 0) {
            ++i;
        }

        int time = x;
        while (i < n && time > 0) {
            ++i;
            --time;
        }

        bool success = true;
        while (i < n) {
            if (a[i] == 1) {
                success = false;
                break;
            }
            ++i;
        }

        cout << (success ? "YES" : "NO") << '\n';
    }
    return 0;
}
