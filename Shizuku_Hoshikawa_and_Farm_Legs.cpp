#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int x, y;
    
   
if(n==1 || n%2!=0){
cout<< 0<<endl;
}
else if(n==2){
    cout<<1<<endl;
}
else
cout<<n/4+1<<endl;
}
return 0;

}