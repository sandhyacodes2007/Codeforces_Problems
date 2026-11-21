#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n; cin>>n;
        string a, b;
        cin>>a>>b;
        int c1=0, c2=0;
        for(int i=1; i<=n; i++){
            bool a_= a[i-1]=='1' ,b_= b[i-1]=='1';
            if(i&1){
c1+=a_;
c2+=b_;
            }
            else{
                c2+=a_;
                c1+=b_;
            }
        }

        bool ok= (c1<=n/2) && (c2<=(n+1)/2);
        cout<<(ok?"YES":"NO")<<endl;
    }
}