#include<bits/stdc++.h>
using namespace std;
bool isliarpresent( int n, vector<int>& res){
    int n= res.size();
    for(int i=0; i<n; i++){
        if(res[i]==res[i+1])return "YES";s
        else return "NO";
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
         cin>>n;
         vector<int> res(n);
         for(int i=0; i<n; i++){
            cin>>res[i];

         }
         int ans= isliarpresent(n, res);
         cout<<ans<<endl;
    }
    return 0;
}