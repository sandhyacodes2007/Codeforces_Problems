#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '.') {
            cout << 0;
        } 
        else {
            if (s[i + 1] == '.') {
                cout << 1;
            } 
            else {
                cout << 2;
            }
            i++; // skip the second character of "-." or "--"
        }
    }

    return 0;
}
///matching job 2. missing skill 3.
//2nd half 
resume classifier 2. job category (job recommanended ) unsupervised learning path 3. missing skill(skill gap report )