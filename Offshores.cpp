
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        vector<long long> contrib(n);
        long long s= 0;

        for(int i = 0; i < n; i++){
            contrib[i] = (a[i] / x) * y;
            s += contrib[i];
        }

        long long ans = 0;
        for(int i = 0; i < n; i++){
            long long cur = a[i] + (s - contrib[i]);
            ans = max(ans, cur);
        }

        cout << ans << endl;
    }

    return 0;
}
