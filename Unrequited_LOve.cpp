/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
    int n;cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
unordered_map<int,int>mpp;
for(int i=0; i<n-4; i++){
    mpp[a[i]+a[i+2]+a[i+4]]++;
}
int cnt=0;
for(auto it: mpp){
    if(it.second>=2)cnt+=it.second/2;
}

cout<<cnt<<endl;
    }
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)cin>>a[i];
        int m=n-4;
        vector<int>v(m);
        unordered_map<int,long long>mpp;
        for(int i=0; i<m; i++){
            v[i]=a[i]+a[i+2]-a[i+4];
            mpp[v[i]]++;
        }
        long long cnt=0;
        for(auto it: mpp){
            cnt+=it.second*(it.second-1)/2;
        }
        for(int i=0; i<m; i++){
            if(i+2<m && v[i]==v[i+2])cnt--;
            if(i+4<m && v[i]==v[i+4])cnt--;
        }
        cout<<cnt<<endl;
    }
}