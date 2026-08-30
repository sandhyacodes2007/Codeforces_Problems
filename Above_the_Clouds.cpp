#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        bool possible = false;
        for (int i = 1; i < n - 1; ++i) {
            // Check if s[i] appears before or after
            if (s.find(s[i], 0) < i || s.find(s[i], i + 1) != string::npos) {
                possible = true;
                break;
            }
        }

        cout << (possible ? "Yes" : "No") << '\n';
    }
    return 0;
}