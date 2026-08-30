#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int n= x+y;
        int d= y-x;
        if(x==0 && y%2==0){
            cout<<"NO"<<endl;
        continue;
        }
       else if(x>y){
        cout<<"NO"<<endl;
       continue;
       }
else cout<<"YES"<<endl;
    
    int mm= 2*x +(d%2);
    for(int i=2; i<=mm+1; i++){
        cout<<i-1<<" "<<i<<endl;
    }
    for(int i=mm+1; i<=n+1; i++){
        cout<<mm<<""<<i<<endl;
    }

}
return 0;
}