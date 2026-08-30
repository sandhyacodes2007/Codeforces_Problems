#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        
        vector<long long> st;
        for (int i = 0; i < n; i++) {
            long long cur = a[i];
            
            // While the stack top is greater than current value
            // we need to merge them
            while (!st.empty() && st.back() > cur) {
                cur += st.back();
                st.pop_back();
            }
            
            st.push_back(cur);
        }
        
        long long ans = 0;
        for (long long x : st) {
            ans = max(ans, x);
        }
        
        cout << ans << "\n";
    }
    
    return 0;
}