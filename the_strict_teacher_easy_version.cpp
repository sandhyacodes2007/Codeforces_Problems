#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,m,q;
        cin>>n>>m>>q;

        int b1,b2,a;
        cin>>b1>>b2;
        cin>>a;
        
        int l=min(b1,b2);
        int r= max(b1,b2);
 if(a<l)cout<<l-1<<endl;
 else if(a>r)cout<<n-r<<endl;
 else cout<<(r-l)/2 <<endl;
    }
}