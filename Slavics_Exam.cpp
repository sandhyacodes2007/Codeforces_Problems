#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;
    cin>>T;
    while(T--){
        string s; cin>>s;
      string t;cin>>t;
        int n= s.size();
      int m= t.size();
       int j=0,i=0;
      while(i<n && j<m){
       if(s[i]==t[j] || s[i]=='?'){
        s[i]=t[j];
        j++;
    }
     i++;

}
 if(j<m ){
cout<<"NO"<<endl;
 }

else{
for(int k=0; k<n; k++)
 if(s[k]=='?') s[k]='a';
            cout<<"YES\n"<<s<<"\n";
        
    }
}
return 0;
}