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


        set<int> se;
        int ans=0;
        for(char c: s){
            se.insert(c);
ans+= se.size();


        }
        cout<<ans<<endl;
    }
}