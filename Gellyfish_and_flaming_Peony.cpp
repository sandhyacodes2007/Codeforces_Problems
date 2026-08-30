#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int compute_gcd(const vector<int>& arr) {
    int i, j;
    int g
    int current_gcd = arr[0];
    for (size_t i = 1; i < arr.size(); ++i) {
        current_gcd = gcd(current_gcd, arr[i]);
        if (current_gcd == 1) {
            break;
        }
    }
    return current_gcd;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        int overall_gcd = compute_gcd(a);
        int count_gcd = 0;
        for (int num : a) {
            if (num == overall_gcd) {
                count_gcd++;
            }
        }

        cout << n - count_gcd << '\n';
    }

    return 0;
}