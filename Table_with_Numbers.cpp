#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, h, l;
        cin >> n >> h >> l;
if(h>l){
    swap(h,l);
}
     int y;
     int cntR=0, cntC=0;   



        for (int i = 0; i < n; i++) {
           cin>>y;
           if(y<=h){
            cntR++;
           }
           if(y<=l){
            cntC++;
           }
        }
        cout<<min(cntR, cntC/2)<<'\n';
    }
    return 0;
}
