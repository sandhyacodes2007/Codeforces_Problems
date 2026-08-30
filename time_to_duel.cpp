#include <bits/stdc++.h>
using namespace std;

string time_to_duel(const vector<int>& res) {
    for(int i = 0; i < res.size() - 1; i++) {
        if(res[i] == res[i+1]) {
            return "YES";
        }
    }
    return "NO";
}

int main() {
    ios_base::sync_with_stdio(false); // Faster I/O
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> res(n);
        for(int i = 0; i < n; i++) {
            cin >> res[i];
        }
        cout <<time_to_duel(res) << "\n";
    }
    return 0;
}
