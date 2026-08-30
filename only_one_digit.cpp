#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int x;
    cin>>x;
    int y= 9;
    while(x>0){
        int digit= x%10;
    
        y= min(y, digit);
        if(y==0)break;
        x/=10;
    }
        cout<<y<<endl;
        
    
}
return 0;

}