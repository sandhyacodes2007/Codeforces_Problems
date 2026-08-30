#include<bits/stdc++.h>
using namespace std;
int main(){
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int l, a, b;
        cin >> l >> a >> b;

        int g= gcd(l, b);
        int res = l - g + (a % g);

        cout << res<< '\n';
    }
    return 0;

}