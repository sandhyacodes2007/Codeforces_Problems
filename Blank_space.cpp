#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int max0=0;

        int cnt0=0;
        for(int i=0; i<n; i++){
            if(a[i]==0)
            {
                cnt0++;
            max0 = max(max0, cnt0);

            }
            else{
                 cnt0=0;
        }
    }
    cout<<max0<<endl;

    }
}