#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<long long> a(n+1), b(n+1);
        for (int i = 1; i <= n; i++) cin >> a[i];
        for (int i = 1; i <= n; i++) cin >> b[i];
        
        vector<bool> used(n+1, false);
        vector<int> t_pos(n+1, -1); 
        bool ok = true;
        
        for (int i = 1; i <= n; i++) {
            int b_j = -1;
            for (int j = 1; j <= n; j++) {
                if (!used[j] && b[j] >= a[i]) {
                    b_j = j;
                    break;
                }
            }
            
            if (b_j == -1) {
                ok = false;
                break;
            }
            
            used[b_j] = true;
            t_pos[i] = b_j;
        }
        
        if (!ok) {
            cout << -1 << "\n";
            continue;
        }
        
        // Count inversions in target_pos
        long long inversions = 0;
        for (int i = 1; i <= n; i++) {
            for (int j = i + 1; j <= n; j++) {
                if (t_pos[i] > t_pos[j]) {
                    inversions++;
                }
            }
        }
        
        cout << inversions << "\n";
    }
    
    return 0;
}