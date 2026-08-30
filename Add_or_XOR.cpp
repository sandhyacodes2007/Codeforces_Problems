#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, x,y;
        cin>>a>>b>>x>>y;
        if(a>b+1)cout<<-1<<endl;
        else if(a==b+1 && !(a&1)){
            cout<<-1<<endl;
        }
        else if(a==b+1 && (a&1)){
            cout<<y<<endl;
        }
        else{
            int ans=0;
            for(;a<b; ++a){
                if(a&1){
                    ans+=x;
                }
                else {
                    ans+= min(x,y);
                }
            }
            cout<<ans<<endl;

        }

    }
return 0;
}