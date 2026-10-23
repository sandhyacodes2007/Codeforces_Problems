#include<bits/stdc++.h>
using namespace std;
bool ok(long long r,long long g, long long b, long long w){
    int cnt= (r&1)+(g&1)+(b&1)+(w&1);
    return cnt<=1;
}
int main(){
    int T;cin>>T;while(T--){
        long long r,g,b,w;
        cin>>r>>g>>b>>w;
        long long mini= min({r, g,b});

        bool res= ok(r,g,b,w);
       if(mini>=1)res||ok(r-1,g-1,b-1,w+1);
       res= res|| ok(r-mini, g-mini, b-mini , w+mini);
       if(mini>=1)res=res||ok(r-mini+1, g-mini+1, b-mini+1, w+mini-1);
        cout << (res ? "Yes" : "No") << "\n";

    }
}