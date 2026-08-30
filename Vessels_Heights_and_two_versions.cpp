#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        vector<ll> h(n);
        for (int i = 0; i < n; i++) {
            cin >> h[i];
        }
    
        
        // Try each vessel as the empty one
        for (int empty = 0; empty < n; empty++) {
            vector<ll> l(n+1, -1),r(n+1,-1);
            
            // Move clockwise from empty// counter clock wise also
           
            for (int i= 0; i < n; i++) {
               l[i+1]=max(l[i], h[(empty + i) % n]);
               r[i+1]= max(r[i], h[(empty-i+n-1)%n]);
                
            }

    
            // Calculate sum
            ll sum = 0;
            for (int i = 0; i < n-1; i++) {
                sum += min(l[i+1],r[n-i-1]);

            }cout<<sum<<"\n"[empty==n-1];
    }
}
    return 0;
}
//error
//
/*
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;
    cin >> n;

    vector<ll> h(n);
    for (int i = 0; i < n; i++) {
        cin >> h[i];
    }

    for (int empty = 0; empty < n; empty++) {

        vector<ll> leftMax(n + 1, -1);
        vector<ll> rightMax(n + 1, -1);

        // Clockwise maxima
        for (int i = 0; i < n; i++) {
            leftMax[i + 1] =
                max(leftMax[i], h[(empty + i) % n]);
        }

        // Counterclockwise maxima
        for (int i = 0; i < n; i++) {
            rightMax[i + 1] =
                max(rightMax[i],
                    h[(empty - 1 - i + 2 * n) % n]);
        }

        ll ans = 0;

        for (int i = 0; i < n - 1; i++) {
            ans += min(leftMax[i + 1],
                       rightMax[n - i - 1]);
        }

        cout << ans;
        if (empty + 1 < n) cout << ' ';
    }

    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        solve();
    }

    return 0;
} 
*/