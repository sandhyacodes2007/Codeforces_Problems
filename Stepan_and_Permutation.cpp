#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        vector<int> p(n + 1);
        for(int i = 1; i <= n; i++) cin >> p[i];
        
        int g = __gcd(x, y);
        
        bool ok = true;
        for(int i = 1; i <= n; i++){
            if((i - p[i]) % g != 0){
                ok = false;
            }
        }
        
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}