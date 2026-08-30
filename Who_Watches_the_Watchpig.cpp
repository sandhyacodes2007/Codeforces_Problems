#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;

        if(k > n - k){          
            cout << -1 << endl;
            continue;           
        }

        int cnt = 0;

        for(int i = 1; i <= n; i++){
            if(i <= k && s[i-1] == 'L') cnt++;        
            if(i > n - k && s[i-1] == 'R') cnt++;      
        }

        cout << cnt << endl;
    }
}