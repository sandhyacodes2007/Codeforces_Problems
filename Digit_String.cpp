#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;

        int pref2 = 0;
        int suf = 0;

        // count total '1' and '3'
        for (char x : s) {
            if (x == '1' || x == '3') {
                suf++;
            }
        }

        int ans = pref2 + suf;

        for (char x : s) {
            if (x == '2') {
                pref2++;
            }
            if (x == '1' || x == '3') {
                suf--;
            }
            ans = max(ans, pref2 + suf);
        }

        cout << (int)s.length() - ans << endl;
    }

    return 0;
}