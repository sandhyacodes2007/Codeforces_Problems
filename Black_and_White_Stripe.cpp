#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;

int mini=INT_MAX;
        int l=0; int r=0; 
        int wh=0;
while(r<n){

        if(s[r]=='W')wh++;
    
if(r-l+1 ==k){
mini= min(mini, wh);
if(s[l]=='W')wh--;
l++;
}
r++;
}




cout<<mini<<endl;
    }
}
