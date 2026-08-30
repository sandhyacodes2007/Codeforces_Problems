#include<bits/stdc++.h>
using namespace std;
using ll= long long;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> b(n);
        for(auto &x : b)cin>>x;
        vector<int> a(n);
        ll prev=0;
        int val=1;
        for(int i=0; i<n; i++){
            ll diff= b[i]-prev;
            if(diff==i+1){
                a[i]=val++;
            }
            else {
                a[i]= (i>0 ? a[i-1] : 1);
            }
            prev= b[i];
        }
        for(int i=0; i<n; i++){
            cout<<a[i]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}