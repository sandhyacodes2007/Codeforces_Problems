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
int mx= 0;
int cnt=0;
for(int i=0; i<n; i++){
    if(s[i]=='#'){
        cnt++;
        mx= max(mx, cnt);
    }
    else {
    cnt=0;
}
}
int ans= (mx+1)/2;
cout<<ans<<endl;
    }
    return 0;
}