#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
        for(int i=1; i<=n; i+=2){
            for(int j=i; j<=n; j*=2){
            for(int k=i*2; k<=n; k*=2){
                if(a[k/2]>a[k])swap(a[k/2],a[k]);
            }
        
        }
    }
            if(is_sorted(begin(a),end(a)))cout<<"YES\n";
       else cout<<"NO"<<endl;
        
    }
    return 0;
}
/*
 if(a[i]>a[i+1] && a[2*i]<a[i+1]){
                swap(a[i], a[2*i]);
            }*/