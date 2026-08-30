#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        vector<int> b(m);
        for (int i = 0; i < m; ++i) {
            cin >> b[i];
        }

        // Since m = 1, we only have b[0]
        int b1 = b[0];
        int prev = -1e18; 
        bool possible = true;
        for (int i = 0; i < n; ++i) {
            // Compute the two possible values for a[i]
            int option1 = a[i];
            int option2 = b1 - a[i];

            // Choose the smallest option that is >= prev
            int chosen = -1;
            if (option1 >= prev && option2 >= prev) {
                chosen = min(option1, option2);
            } else if (option1 >= prev) {
                chosen = option1;
            } else if (option2 >= prev) {
                chosen = option2;
            } else {
        
                possible = false;
                break;
            }

            // Update prev for the next iteration
            prev = chosen;
        }

        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    return 0;
}