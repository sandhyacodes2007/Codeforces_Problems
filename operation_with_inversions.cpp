#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        int op= 0;
        int mx = a[0];

        for (int j = 1; j < n; j++) {
            if (a[j] < mx)
            op++;          
            mx = max(mx, a[j]); 
        }

        cout <<op << "\n";
    }
    return 0;
}
