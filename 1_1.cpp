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
         int ans1=0;
        for(int i=1; i<n-1; i++){
            if(s[i-1]==s[i+1]  && s[i+1]=='1'){
                s[i]= '1';
            }
        }
            for(int j=0; j<n; j++){
                if(s[j]=='1')ans1+=1;
            }
                int ans=0;
              for(int i=1; i<n-1; i++){
            if(s[i-1]==s[i+1] && s[i+1]=='1'){
                s[i]= '0';
            }
        }
        
            for(int j=0; j<n; j++){
                if(s[j]=='1')ans+=1;
            }
            
            
        
    
    cout<<ans<<""<<ans1<<endl;

}
return 0;
}
