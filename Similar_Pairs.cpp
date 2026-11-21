#include <iostream>
#include<math.h>
#include<vector>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        int e = 0, o = 0;

        for (int i = 0; i < n; i++) {
            cin >> a[i];

            if (a[i] % 2 == 0)
                e++;
            else
                o++;
        }

        if (e % 2 == 0 && o % 2 == 0) {
            cout << "YES\n";
        }
        else {
            bool ok = false;

            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    if (a[i] % 2 != a[j] % 2 &&
                        abs(a[i] - a[j]) == 1) {

                        ok = true;
                        break;
                    }
                }

                if (ok)
                    break;
            }

            cout << (ok ? "YES\n" : "NO\n");
        }
    }

    return 0;
}