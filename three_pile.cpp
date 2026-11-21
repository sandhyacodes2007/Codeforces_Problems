#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c;
        cin>>a>>b>>c;
         if((b-a)==1 && (c-b)==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
