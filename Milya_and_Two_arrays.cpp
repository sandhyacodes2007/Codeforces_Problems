#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void solve() {
    int n;
    cin >> n;  
    vector<int> a(n), b(n);
    
    // Read arrays a and b
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
    
    unordered_set<int> distinct_a(a.begin(), a.end());  // Store distinct elements of a
    unordered_set<int> distinct_b(b.begin(), b.end());  // Store distinct elements of b
    
    // Store distinct sums
    unordered_set<int> distinct_sums;
    
    for (int x : distinct_a) {
        for (int y : distinct_b) {
            distinct_sums.insert(x + y);
        }
    }
    
    // If we have at least 3 distinct sums, answer is YES
    if(distinct_sums.size() >= 3) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int t;
    cin >> t;  
    while(t--) {
        solve(); 
    }
    return 0;
}