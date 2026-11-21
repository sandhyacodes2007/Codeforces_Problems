#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n= s.size();
int cnt=0;
int l=0; int r=n-1;
while(l<r){
    if(s[l]!=s[r]) cnt++;
        l++;r--;


}

if(cnt==1 || (cnt==0 && n%2==1))cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}