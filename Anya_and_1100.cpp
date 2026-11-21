#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main(){
    int t;cin>>t;while(t--){
        string s;cin>>s;
        int q;cin>>q;
       while(q--){
        int i; char v;

        cin>>i>>v;
        s[i-1]=v;
        bool found=false;
        cout<<(s.find("1100")!=string::npos ? "YES":"NO")<<endl;


       }}

}