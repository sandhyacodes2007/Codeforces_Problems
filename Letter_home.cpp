#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    int t; // number of test cases
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> x(n);
        for (int i = 0; i < n; ++i) {
            cin >> x[i];
        }

        int minX = x[0];
        int maxX = x[n - 1];

        int option1 = abs(s - minX) + (maxX - minX); // go to min, then to max
        int option2 = abs(s - maxX) + (maxX - minX); // go to max, then to min

        cout << min(option1, option2) << '\n';
    }

    return 0;
}