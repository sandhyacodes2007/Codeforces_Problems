#include<iostream>
#include<string>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n; 
    cin>>n;
    string s;
cin>>s;
s+=s;
n*=2;
int cur=0;
int res=0;

for(int i=0; i<n; i++){
    if(s[i]=='1')cur= 0;
    else cur++;

res= max(res, cur);
}
cout<<res<<endl;
}

return 0;

}
