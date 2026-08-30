#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>h(n);
        for(int i=0; i<n; i++){
            cin>>h[i];

        }
        int maxi= *max_element(h.begin(), h.end());
        int mini= *min_element(h.begin(),h.end());
        cout<<(maxi-mini)+1<<endl;
    }
}