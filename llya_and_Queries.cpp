#include<bits/stdc++.h>
using namespace std;
int main(){
  
    string s;
    cin>>s;
   
    vector<int>pref(s.size()+1,0);
    

    for(int i=1; i<s.size(); i++){
        pref[i+1]= pref[i];
        if(s[i]== s[i-1])pref[i+1]++;
    }
    int m;
    cin>>m;
    while(m--){
        int l,r;
        cin>>l>>r;
        cout<<pref[r]- pref[l]<<endl;
    }
}