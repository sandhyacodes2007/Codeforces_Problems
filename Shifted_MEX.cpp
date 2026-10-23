#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0;i<n; i++){
            cin>>a[i];

        }


        sort(a.begin(), a.end());
        a.erase(unique(a.begin(), a.end()), a.end());

        int b = 1, cur = 1;

        for (int i = 1; i < (int)a.size(); i++) {
            if (a[i] == a[i - 1] + 1) {
                cur++;
            } else {
                b = max(b, cur);
                cur = 1;
            }
        }

        b = max(b, cur);
        cout << b << "\n";
    }
    return 0;
}