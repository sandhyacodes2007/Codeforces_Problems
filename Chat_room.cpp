#include<bits/stdc++.h>
using namespace std;
bool is_subsequence(string s){
     string m= "hello";
    int n1= s.size();
    int p= m.size();
    
    int r=0;
    for(int i= 0;  i<n1; i++){
if(s[i]==m[r]){
    r++;

}
    }
if(r==p)return true;
else return false;
    }


int main(){
    string s;
    cin>>s;
   if(is_subsequence(s)){
    cout<<"YES"<<endl;
   }
   else cout<<"NO"<<endl;
   
    }
