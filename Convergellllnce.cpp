#include <bits/stdc++.h>
using namespace std;

int main() {

    int sixseven;
    cin >> sixseven;
    while (sixseven--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        sort(a.begin(), a.end());

         int cnt = 0;
        for(int i=0; i<n; i++) if(a[i] != a[n-1-i]) cnt++;

        cout << cnt / 2 << "\n";
    }
}