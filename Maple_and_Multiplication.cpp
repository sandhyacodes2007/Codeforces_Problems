#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b;
        cin>>a>>b;
        int op=0;
        if(a==b) 
        cout<<0<<endl;
        else {
            int larger= max(a, b);
            int smaller= min(a,b);
            if(larger%smaller ==0)cout<<1<<endl;
            else cout<<2<<endl;
        }
    }
    return 0;
}