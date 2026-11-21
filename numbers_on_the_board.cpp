#include<bits/stdc++.h>

using namespace std;
int main(){
    int t; cin>>t; while(t--){
     int l, r;
     cin>>l>>r;
     int sum=0;
     int mini= INT_MAX;
    for(int i=l; i<=r; i++){
sum+=i;

    }
      for(int i=l ; i<=r; i++){
        if(abs(i-sum)< mini)
            mini= abs(i-sum);
        
      }
      cout<<mini<<endl;
    }
}