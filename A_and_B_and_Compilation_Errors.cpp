#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<int>b(n-1);
    for(int i=0; i<n-1; i++){
        cin>>b[i];
    }

    vector<int>c(n-2);
    for(int i=0; i<n-2; i++){
        cin>>c[i];
    }
long long  asum=0,bsum=0,csum=0;
 for (int i = 0; i < n; i++) {
        
        asum+= a[i];
    }
 
    for (int i = 0; i < n - 1; i++) {
        
        bsum += b[i];
    }
 
    for (int i = 0; i < n - 2; i++) {
       
        csum += c[i];
    }
    cout<<asum-bsum<<endl;
    cout<<bsum-csum<<endl;
 
    
    return 0;

}