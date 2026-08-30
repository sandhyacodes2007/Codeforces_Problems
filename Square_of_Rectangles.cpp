#include <iostream>
using namespace std;

bool canFormSquare(int l1, int b1, int l2, int b2, int l3, int b3) {
    // Case 1: all lengths are same, sum of breadths equals that length
    if (l1 == l2 && l2 == l3 && b1 + b2 + b3 == l1)
        return true;

if(b1==b2 && b2==b3 && l1+l2+l3==b1){
    return true;
}
    // Case 2: check for L-shaped fitting
    if (l1+ l2==l1+l3 && l1+l2==b1 && b2 + b3 == b1) {
        return true;
    }
    if( b1+b2==b2+b3 && b1+b2==l1 && l2+l3==l1)
    {
        return true;
    }
    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l1, b1, l2, b2, l3, b3;
        cin >> l1 >> b1 >> l2 >> b2 >> l3 >> b3;
        if (canFormSquare(l1, b1, l2, b2, l3, b3))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}

