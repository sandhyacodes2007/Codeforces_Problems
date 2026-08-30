#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int minel= min({a,b,c});
        int maxel= max({a,b,c});
        if((maxel-minel)<minel+(a+b+c-minel-maxel) -minel)
        {
            cout<<maxel-minel<<endl;
        }
        else
        {
             cout<<(minel+(a+b+c-minel-maxel)) -minel<<endl;
    }
}
}