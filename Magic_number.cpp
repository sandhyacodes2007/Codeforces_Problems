 #include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s = to_string(n);

    int len = s.size();
    int i = 0;

    while (i < len) {
        if (s.substr(i, 3) == "144")
            i += 3;
        else if (s.substr(i, 2) == "14")
            i += 2;
        else if (s[i] == '1')
            i++;
        else {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
    return 0;
}