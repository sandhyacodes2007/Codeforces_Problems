#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool ok=true;
    for(int i=1; i<s.size(); i++){
        if(islower(s[i])){
            ok=false;
            break;
        }
    }
    if(ok){
        for(char& ch: s){
            if(islower(ch))
            {
                ch= toupper(ch);
            }
            else {
             ch=   tolower(ch);
        }
        }}
cout<<s<<endl;
}