#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long moves=0;
        for(int i=0; i<n; i++){
            int a, b, c, d;
            cin>>a>>b>>c>>d;
       
            if (c > a) moves += (c - a); // need more zeros
            if (d > b) moves += (d - b); // need more ones
        }   
        cout<<moves<<endl;
        }
    
    return 0;
}