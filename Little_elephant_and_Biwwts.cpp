#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cnt0= count(s.begin(),s.end(), '0');
    string res;
    if(cnt0==0)
    {
         s.erase(s.size()-1,1);
      cout<<  s<<endl;
        
    }
    else{
for(int i=0; i<s.size(); i++){
    if(s[i]=='0'){
    s.erase(i, 1);
    break;
    }

}
cout<<s<<endl;
    }

}