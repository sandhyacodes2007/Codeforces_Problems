#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<long long> a(n), b(m);
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;

        for(int j = 0; j < m; j++){
            int idx = min_element(a.begin(), a.end()) - a.begin();
            if(j == m - 1 || b[j] > a[idx]){
                a[idx] = b[j];
            }
        }

        long long sum = 0;
        for(auto x : a) sum += x;
        cout << sum << endl;
    }
}