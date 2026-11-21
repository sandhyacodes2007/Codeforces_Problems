#include<iostream>
#include<string>
#include<math.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        string a,b;
        cin>>a>>b;
bool t= false;
        for(int i=0; i<a.size(); i++){
            if(a[i]==b[i] && a[i]=='0' && a[i+1]==b[i+1] && a[i+1]=='1')
        {
            t=true;
        }
    }

        cout<<(t? "YES": "NO")<<endl;
    }
}