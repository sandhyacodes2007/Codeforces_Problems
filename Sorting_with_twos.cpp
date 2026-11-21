#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> a(n+1);
        for(int i=1; i<=n; i++) cin>>a[i];
        bool ok=true;
        for(int i=1; i<n; i++){
            bool pw = (i&(i-1))==0;
            if(!pw && a[i]>a[i+1]) ok=false;
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
}