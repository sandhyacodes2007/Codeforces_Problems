#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
int t; cin>>t;while(t--){
int n;cin>>n;
int sum=0;

vector<int>a(n);
for(int i=0; i<n; i++){
    cin>>a[i];
    sum+=a[i];
}

if(sum==n)cout<<-1<<endl;
else  cout<<sum-1<<endl;
}



}