#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        long long n, k, m;
        cin>>n>>k>>m;
        if (k > m){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        long long prev = 0; 
        for (long long i = 1; i <= n; i++){
            long long pos = i % k;
            long long diff = pos - prev;
            if (diff <= 0) diff += m;
cout<<diff<<endl;
            prev = pos;
        }
cout<<endl;
    }
    return 0;
}