#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int cnt0 = 0;
        for (char c : s) {
            if (c == '0') cnt0++;
        }
        int misplaced = 0;
        for (int i = 0; i < cnt0; ++i) {
            if (s[i] == '1') {
                misplaced++;
            }
        }

        cout << misplaced << endl;
    }

    return 0;
}
