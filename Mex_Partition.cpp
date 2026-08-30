#include <bits/stdc++.h>
using namespace std;
int main() {
    int t; 
cin>>t;
    while (t--) {
        int n; 
        cin >> n;
        vector<int> freq(102, 0);
        for (int i = 0; i < n; i++) {
            int x; 
            cin >> x;
            if (x >= 0 && x <= 101) ++freq[x];
        }
        int Mex = 0;
        while (Mex < (int)freq.size() && freq[Mex] > 0) ++Mex;
        cout << Mex << '\n';
    }
    return 0;
}
