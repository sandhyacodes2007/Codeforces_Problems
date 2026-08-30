#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        
        // Prefix sums: 0 -> +1, 1 -> -1
        vector<int> pref(n + 1, 0);
        for (int i = 0; i < n; i++) {
            pref[i + 1] = pref[i] + (s[i] == '0' ? 1 : -1);
        }
        
        long long total = 1LL * n * (n + 1) / 2;
        
        // Count substrings with sum ≡ 0 (mod 3)
        vector<long long> cnt(3, 0);
        long long bad_sum = 0;
        for (int i = 0; i <= n; i++) {
            int mod = (pref[i] % 3 + 3) % 3;
            bad_sum += cnt[mod];
            cnt[mod]++;
        }
        
        // Count alternating substrings of odd length >= 3 (two-pointer)
        long long bad_alt = 0;
        for (int i = 0; i < n; ) {
            int j = i;
            while (j + 1 < n && s[j] != s[j + 1]) j++;
            
            int len = j - i + 1;
            if (len >= 3) {
                long long odd = (len % 2) ? 1LL * ((len + 1) / 2) * ((len + 1) / 2) 
                                          : 1LL * (len / 2) * (len / 2 + 1);
                bad_alt += odd - len;
            }
            i = j + 1;
        }
        
        cout << total - bad_sum - bad_alt << "\n";
    }
    
    return 0;
}