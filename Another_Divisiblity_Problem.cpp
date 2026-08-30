#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        long long x;
        cin >> x;

        // Find number of digits in x
        long long d = 0;
        long long temp = x;
        while(temp > 0) {
            temp /= 10;
            d++;
        }

        // Calculate y = 10^d - x
        long long y = pow(10, d) - x;

        cout << y << endl;
    }

    return 0;
}
