#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        if(a%2 !=0){
            cout<<"NO"<<endl;
            continue;
        }
        if(a==0 && b%2==1){

            cout<<"NO"<<endl;
            continue;
        }
    
            cout<<"YES"<<endl;
        }
        return 0;
    }
