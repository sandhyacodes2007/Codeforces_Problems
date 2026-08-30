
   #include <bits/stdc++.h>
using namespace std;

int Max_value(vector<int>& a) {
    int n = a.size();
    vector<int> prefixMax(n);

    int maxel = a[0];
    int maxIdx = 0;

    for (int i = 0; i <n; i++) {
        if (a[i] > maxel) {
            maxel = a[i];
            maxIdx = i;
        }
    }

        swap(a[maxIdx], a[0]);

    prefixMax[0] = a[0];
    int sum = prefixMax[0];

    for (int i = 1; i < n; i++) {
        prefixMax[i] = max(prefixMax[i - 1], a[i]);
        sum += prefixMax[i];
    }

    return sum;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        cout << Max_value(a) << endl;
    }
}
