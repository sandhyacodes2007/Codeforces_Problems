#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
vector<int>a(n);
for(int i=0;i<n; i++)
cin>>a[i];

int max_el= INT_MIN;
for(int i=0; i<n; i++){
    max_el= max(max_el, a[i]);

}cout<<max_el<<endl;

    }
    return 0;
}