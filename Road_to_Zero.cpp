#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    long long x,y;
        cin>>x>>y;
        long long a,b;
        cin>>a>>b;
        long long mn= min(x,y);
        long long d= abs(x-y);
      long long ans;

      if(b<2*a)
      ans= mn*b+ d*a;
    else
    ans= (x+y)*a;
    
        cout<<ans<<endl;
    }
}