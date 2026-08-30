#include <bits/stdc++.h>
using namespace std;

string solve(string s) {
    int freq[256] = {0};
    for (char c : s) {
        freq[c]++;
    }
    
    string res;
    // Add all T's
    res += string(freq['T'], 'T');
    // Add all characters except F and T
    for (char c = 'A'; c <= 'Z'; ++c) {
        if (c != 'F' && c != 'T' && freq[c] > 0) {
            res += string(freq[c], c);
        }
    }
    // Add all F's
    res += string(freq['F'], 'F');
    
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << '\n';
    }
    
    return 0;
}