#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
int cnt=0;
int i=0;
while(i<n-1){
    if(s[i]=='(' && s[i+1]==')'){
    s.erase(i, 2);
    if(i>0)i--;
    }

    else i++;

}

for(int j=0; j<s.size(); j++){
if(s[j]=='(')cnt++;


    }
    cout<<cnt<<endl;
}
}