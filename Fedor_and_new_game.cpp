#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,k;
    cin>>n>>m>>k;

    vector<int>x(m+1);
    for(int i=0; i<=m; i++){
        cin>>x[i];
    }

    int fedor= x[m];//fedor is the last player

    int cnt=0;
for(int i=0; i<m; ++i){
    int diffbits= __builtin_popcount(x[i]^fedor);
    if(diffbits<=k){
        cnt++;
    }
}
cout<<cnt<<endl;

return 0;
}