#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    
    // Read the array elements
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    vector<int> b;
    for (int i = 1; i < n; i += 2) {
        b.push_back(a[i]);
    }
    
    // Add 0 at the end of array b
    b.push_back(0);

    // Now calculate the cost of the array b
    int cost = 1;
    while (cost <= b.size() && b[cost - 1] == cost) {
        cost++;
    }
    cout << cost << endl;
}

int main() {
    int t;
    cin >> t; 
    while (t--) {
        solve();  
    }
    return 0;
}

