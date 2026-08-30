/*
#include <bits/stdc++.h>
using namespace std;

int minFinalLength(string s) {
    int length = s.size();
    
    for (int i = 0; i < length - 1; ) {
        if (s[i] == s[i + 1]) {
            // Remove s[i+1] by shifting left (simulate erase)
            s.erase(i + 1, 1);
            length--; // Reduce length
            // Continue checking the new pair at the same index
            if (i > 0) i--;  
        } else {
            i++; // Move forward
        }
    }
    
    return length;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << minFinalLength(s) << endl;
    }
    
    return 0;
}



#include <bits/stdc++.h>
using namespace std;

// Function to find a replacement character from the given string
char getReplacementChar(const string &s, char avoid1, char avoid2) {
    for (char c : s) {
        if (c != avoid1 && c != avoid2) return c; // Choose a character different from avoid1 and avoid2
    }
    return avoid1; // Fallback (should not occur)
}

int minFinalLength(string s) {
    int length = s.size();

    for (int i = 0; i < length - 1; ) {
        if (s[i] == s[i + 1]) {
            // Replace s[i] with another letter from s
            char nextChar = (i + 2 < length) ? s[i + 2] : s[0]; // Pick the next available letter
            s[i] = getReplacementChar(s, s[i], nextChar);

            // Remove s[i+1]
            s.erase(i + 1, 1);
            length--;

            // Move back to check for new adjacent pairs
            if (i > 0) i--;
        } else {
            i++; // Move forward
        }
    }

    return length;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        string s;
        cin >> s;
        cout << minFinalLength(s) << endl;
    }
    
    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int minFinalLength(string s) {
    stack<char> st;

    for (char c : s) {
        if (st.empty() && st.top() == c) {
            st.pop();  // Simulating replacing s[i] and removing s[i+1]
        } else {
            st.push(c);
        }
    }

    return st.size();  // The remaining length of s after operations
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << minFinalLength(s) << endl;
    }

    return 0;
}


#include <bits/stdc++.h>
using namespace std;

int minFinalLength(string s) {
    int length = s.size();

    for (int i = 0; i < length - 1; ) {
        if (s[i] == s[i + 1]) {
            // Replace s[i] with a different letter
            for (char c = s[0]; c <= s.size()-1; c++) {
                if (c != s[i] && (i + 2 >= length || c != s[i + 2])) {
                    s[i] = c;  // Replace with different letter
                    break;
                }
            }

            // Remove s[i+1]
            s.erase(i + 1, 1);
            length--;

            // Move back to check for new adjacent pairs
            if (i > 0) i--;
        } else {
            i++;  // Move forward
        }
    }

    return length;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string s;
        cin >> s;
        cout << minFinalLength(s) << endl;
    }

    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    int n = s.size();
    for (int i = 0; i < n - 1; i++) {
        if (s[i] == s[i + 1]) {
            s[i] = s[i - 1 >= 0 ? i - 1 : i + 2]; // Replace si with another valid letter from s
            s.erase(i + 1, 1); // Remove si+1
            i = max(-1, i - 2); // Re-evaluate previous characters
            n--;
        }
    }
    
    cout << s.size() << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
