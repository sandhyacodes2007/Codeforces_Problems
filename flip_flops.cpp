#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; long long c;
        cin>>n>>c;
        long long k;
        cin>>k;
        vector<long long >a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        for(int i=1;i<=n; i++){
            if(a[i]<=c){
         long long minel = min(k, max(0LL, c - a[i]));

k-= minel;
c+= (a[i]+minel);

            }
   cout<<c<<endl;

}
    cout<<c<<endl;
        }
}