#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
int n;
cin>>n;
int k=1;
for(int i=1; i<n+1; i++)
{cout<<(k*(k+2))<<" ";
    k+=2;
}
cout<<endl;
    }
    return 0;
    
}