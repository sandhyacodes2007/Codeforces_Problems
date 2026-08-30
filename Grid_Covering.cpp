#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,a,b;
        cin>>n>>m>>a>>b;
        if(gcd(a,n) ==1 && gcd(b,m)==1&& gcd(n,m)>=2){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    return 0;

}