#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>w(n);
        for(int i=0; i<n; i++){
            cin>>w[i];
        }
        int ans=0;
        int l=0; int r=n-1;
        int lsum=w[0];
        int rsum=w[n-1];
while(l<r){
    if(lsum== rsum){
      ans= max(ans, l+1+n-r);
    }
    if(lsum<=rsum){
        l++;
       lsum+= w[l];
    }
    else if(rsum<lsum){
        r--;
        rsum+= w[r];
    }
}
cout<<ans<<endl;
    }
    return 0;
}