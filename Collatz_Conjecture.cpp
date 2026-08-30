#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int k, x;
        cin >> k >> x;

        while(k != 0) {
            if(k>1 && x==4){
                x= x*2;
            }
            else if ((x - 1) % 3 == 0 && ((x - 1) / 3) % 2 == 1) {
                x = (x - 1) / 3;
            } else {
                x = x * 2;
            }
            k--;
        }

        cout << x << endl;
    }

    return 0;
}