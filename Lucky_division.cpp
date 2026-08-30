#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    bool ok=false;
    vector<int> num= {4,7, 47,74, 444, 474, 477, 747, 774, 777};
   for(int it: num){
        if(n%it==0){
        ok=true;
        break;
    
      
    }
}
    cout<<(ok?"YES":"NO");

}