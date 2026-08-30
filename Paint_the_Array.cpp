/*#include<bits/stdc++.h>
using namespace std;
int main(){
        int t; cin>>t; while(t--){ int n; cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];     
        }
long long d=0;
        for(int i=0; i<n; i++){
            bool valid= true;
            for(int j=0; j<n-1; j++){
            bool r1= (a[j] %a[i]==0);
            bool r2= (a[j+1]%a[i]==0);
            if(r1==r2){
            valid=false;
            break;
            } 
                }

            if(valid){
            d=a[i]; break;
        }
        }
        cout<<d<<endl;
    
        }
}

*/
#include<bits/stdc++.h>
using namespace std;

bool check(vector<long long>& a, long long d, int n){
    if(d == 0) return false;
    for(int j = 0; j < n - 1; j++){
        bool r1 = (a[j] % d == 0);
        bool r2 = (a[j+1] % d == 0);
        if(r1 == r2) return false; // adjacent same color -> not beautiful
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) cin >> a[i];

        long long d1 = a[0], d2 = a[1];
        long long ans = 0;

        if(check(a, d1, n)) ans = d1;
        else if(check(a, d2, n)) ans = d2;

        cout << ans << endl;
    }
}