#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    
    int count0 = 0, count1 = 0;
    for (char c : s) {
        if (c == '0') count0++;
        else count1++;
    }
    
    int max_possible_pairs = n / 2;
    if (k > max_possible_pairs) {
        cout << "NO\n";
        return;
    }
     int remaining_pairs = (n / 2) - k;
    if ((count0 >= k && count1 >= k) || 
        (count0 >= remaining_pairs && count1 >= remaining_pairs && 
         (count0 - remaining_pairs) + (count1 - remaining_pairs) >= 2 * k)) {
          int available0 = count0 - remaining_pairs;
        int available1 = count1 - remaining_pairs;
        if (available0 >= 0 && available1 >= 0 && 
            available0 % 2 == 0 && available1 % 2 == 0 && 
            (available0 / 2) + (available1 / 2) >= k && 
            (available0 / 2) >= 0 && (available1 / 2) >= 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else {
        cout << "NO\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}