#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
        vector<int>ans;
      sort(a.begin(), a.end());
int index;
for(int i=0; i<n; i++){
if(a[i]==k)index=i;
else if(a[i]<k)

}

ans.push_back(index);
index--;


    }
}