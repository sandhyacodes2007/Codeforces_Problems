#include <iostream>
#include <string>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while (t--) {
        string s; cin >> s;

        int balance = 0;
        bool can_break = false;
        int n = (int)s.size();

        for (int i = 0; i < n; i++) {
            if (s[i] == '(') balance++;
            else balance--;

            // If balance is zero before last character → concatenation found
            if (balance == 0 && i != n - 1) {
                can_break = true;
                break;
            }
        }

        cout << (can_break ? "YES" : "NO") << "\n";
    }
    return 0;
}