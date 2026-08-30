/*#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> q[i];
    
    vector<int> pow2(n);
    pow2[0] = 1;
    for (int i = 1; i < n; ++i) {
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }
    
    vector<int> r(n);
    int max_p = 0, max_q = 0;
    priority_queue<int> max_p_heap, max_q_heap;
    
    for (int i = 0; i < n; ++i) {
        max_p_heap.push(p[i]);
        max_q_heap.push(q[i]);
        
        int current_max_p = max_p_heap.top();
        int current_max_q = max_q_heap.top();
        
        r[i] = (pow2[current_max_p] + pow2[current_max_q]) % MOD;
    }
    
 vector<int> pow_p(n), pow_q(n);
    for (int i = 0; i < n; ++i) {
        pow_p[i] = pow2[p[i]];
        pow_q[i] = pow2[q[i]];
    }
    
  
    r.assign(n, 0);
    int current_max_p = -1, current_max_q = -1;
    for (int i = 0; i < n; ++i) {
        if (p[i] > current_max_p) current_max_p = p[i];
        if (q[i] > current_max_q) current_max_q = q[i];
        r[i] = (pow2[current_max_p] + pow2[current_max_q]) % MOD;
    }
    
    if (n <= 2000) {
        vector<int> r_brute(n, 0);
        for (int i = 0; i < n; ++i) {
            int max_val = 0;
            for (int j = 0; j <= i; ++j) {
                if (i - j >= 0 && i - j < n) {
                    int current = (pow_p[j] + pow_q[i - j]) % MOD;
                    if (current > max_val) {
                        max_val = current;
                    }
                }
            }
            r_brute[i] = max_val;
        }
        for (int num : r_brute) {
            cout << num << " ";
        }
        cout << "\n";
        return;
    } else {
        int current_max_p = -1, current_max_q = -1;
        for (int i = 0; i < n; ++i) {
            if (p[i] > current_max_p) current_max_p = p[i];
            if (q[i] > current_max_q) current_max_q = q[i];
            r[i] = (pow2[current_max_p] + pow2[current_max_q]) % MOD;
        }
        for (int num : r) {
            cout << num << " ";
        }
        cout << "\n";
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
    */
   #include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    vector<int> p(n), q(n);
    for (int i = 0; i < n; ++i) cin >> p[i];
    for (int i = 0; i < n; ++i) cin >> q[i];
    
    vector<int> pow2(n);
    pow2[0] = 1;
    for (int i = 1; i < n; ++i) {
        pow2[i] = (pow2[i-1] * 2) % MOD;
    }
    
    vector<int> pow_p(n), pow_q(n);
    for (int i = 0; i < n; ++i) {
        pow_p[i] = pow2[p[i]];
        pow_q[i] = pow2[q[i]];
    }
    
    vector<int> r(n, 0);
    for (int i = 0; i < n; ++i) {
        int max_val = 0;
        for (int j = 0; j <= i; ++j) {
            if (i - j >= 0 && i - j < n) {
                int current = (pow_p[j] + pow_q[i - j]) % MOD;
                if (current > max_val) {
                    max_val = current;
                }
            }
        }
        r[i] = max_val;
    }
    
    for (int num : r) {
        cout << num << " ";
    }
    cout << "\n";
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