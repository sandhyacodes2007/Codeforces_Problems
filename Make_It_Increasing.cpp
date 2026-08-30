#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long >a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
long long  cnt=0;
bool ok= true;
    
        for(int i=n-2; i>=0; i--){
            
            while(a[i]>=a[i+1]){
            if(a[i]==0){
ok= false;
               
                break;
            }
            
            a[i]= a[i]/2;
            cnt++;
        }
        if(!ok)break;
            }
        
      cout<<(ok?cnt : -1)<<endl;
}
return 0;
}
