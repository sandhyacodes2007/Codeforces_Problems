#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(auto &x : a) cin >> x;
        
        long long prefixS= 0;
        bool ok = true;
        
        for(int k = 1; k <= n; k++){
            prefixS += a[k-1];
            long long req= (long long)k * (k + 1) / 2;
            if(prefixS < req){
                ok = false;
            }
        }
        
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}