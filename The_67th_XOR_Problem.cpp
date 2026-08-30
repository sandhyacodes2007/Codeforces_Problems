#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& a){
    int n= a.size();
    int m=0;
    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++)
m=max(m,a[i]^a[j]);
    }
    return m;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n;i++){
            cin>>a[i];
        }
        int ans= solve(a);
        cout<<ans<<endl;
    }
    return 0;

}