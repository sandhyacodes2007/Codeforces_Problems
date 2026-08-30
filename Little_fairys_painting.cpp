#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> a(n);
        for(int i=0; i<n; i++)
            cin>>a[i];
            set<long long> s(a.begin(), a.end());
        long long D = s.size();
               long long ans = LLONG_MAX;
        for (long long x : s) {
            if (x >= D) {
                ans = x;
                break;
            }
        }

        cout << ans << "\n";
    }
        return 0;
}