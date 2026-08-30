#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        int original = stoi(s);
        int root = sqrt(original);
        bool found = false;

        // Check if root² == original (to avoid floating-point errors)
        if (root * root != original) {
            cout << -1 << '\n';
            continue;
        }

        // Now find a and b such that a + b = root
        int a= INT_MAX; int b= INT_MAX;
        for ( a = 0; a <= root / 2; a++) {
            int b = root - a;
            cout << a << " " << b << '\n';
            found = true;
            break;
        }

        if (!found) {
            cout << -1 << '\n';
        }
    }
    return 0;
}