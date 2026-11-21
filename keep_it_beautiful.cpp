#include <iostream>
#include <string>
#include <vector>
using namespace std;

string solve(vector<int>& x) {
    string res = "";
    vector<int> a;     //empty array     
    int cnt = 0;            //count descent
    for (int v : x) {
        int nw = cnt + (!a.empty() && a.back() > v);
        if (nw == 0 || (nw == 1 && v <= a[0])) {
            a.push_back(v);
            cnt = nw;
            res += '1';
        } else {
            res += '0';
        }
    }
    return res;
}

int main() {
    int t; cin >> t;
    while (t--) {
        int q; cin >> q;
        vector<int> x(q);
        for (int &v : x) cin >> v;
        cout << solve(x) << "\n";
    }
}