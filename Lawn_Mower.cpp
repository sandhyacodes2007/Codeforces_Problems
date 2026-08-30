#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n, w;
        cin>>n>>w;
        int p= floor(n/w);
        cout<< n- p<<endl;
    }
    return 0;
}