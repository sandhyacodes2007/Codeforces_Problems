#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
int n,x=0,idx=0;
cin>>n;
vector<int>a(n),b(n);
for(int i=0;i<n;i++){
cin>>a[i];
x^=a[i];
}
for(int i=0;i<n;i++){
cin>>b[i];x^=b[i];
}
if(!x){
cout<<"Tie\n";continue;
}
for(int i=0;i<n;i++)
if(a[i]^b[i])idx=i;// find the last differing index
// if i is odd then Mai wins otherwise Ajisai
cout<<(idx&1?"Mai":"Ajisai")<<"\n";
}
}