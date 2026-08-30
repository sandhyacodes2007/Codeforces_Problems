#include<iostream>
#include<string>
using namespace std;

 int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        int ans=0;
        int lastp=-k;
        for(int i=0; i<n; i++){
            if(s[i]=='1'){
                if(i-lastp >=k){
                    ans++;
                }
                    lastp =i;
                
            }
        }
        cout<<ans<<endl;
    }
    return 0;
 }