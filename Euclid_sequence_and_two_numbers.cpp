#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(b.begin(), b.end(), greater<int>());
        int x= b[0];
        int y= b[1];
        int found=true;
        for(int i=2; i<n; i++){
            if((b[i-2 ]%b[i-1])!=b[i])found=false;
        
        }
        if(found)cout<<x<<" "<<y<<endl;
        else cout<<-1<<endl;
    }
}