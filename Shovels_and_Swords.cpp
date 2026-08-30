#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        
int x= min(a,b);
        cout<<min(x, (a+b)/3)<<endl;
    }
}