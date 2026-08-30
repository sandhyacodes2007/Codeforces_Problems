#include <bits/stdc++.h>
using namespace std;

bool fair(long long n){
    long long temp = n;

    while(temp){
        int digit = temp % 10;

        if(digit != 0 && n % digit != 0)
            return false;

        temp /= 10;
    }

    return true;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n;
        cin >> n;

        while(!fair(n))
            n++;

        cout << n << '\n';
    }

    return 0;
}