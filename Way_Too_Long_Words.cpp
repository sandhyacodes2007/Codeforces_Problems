#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n= s.size();
        int m= n-2;
        if(n>10){
        string res="";
        res+=s[0];
        res+=to_string(m);
        res+=s[n-1];

    

    cout<<res<<endl;
        }
        else
        cout<<s<<endl;
    }
    return 0;
}