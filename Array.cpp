#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        vector<int> ans(n);

        multiset<int> s; // store elements to the right

        for(int i = n - 1; i >= 0; i--){
            // count elements < a[i]
            int less = distance(s.begin(), s.lower_bound(a[i]));

            // count elements > a[i]
            int greater = distance(s.upper_bound(a[i]), s.end());

            ans[i] = max(less, greater);

            s.insert(a[i]);
        }

        for(int x : ans) cout << x << " ";
        cout << "\n";
    }
}