#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n,q; cin>>n>>q;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];

        vector<int> x(q);
        for(int i=0;i<q;i++) cin>>x[i];

        int maxx = 999; 
        for(int i=0;i<q;i++){
            if(x[i] >= maxx) continue;   
            for(int j=0;j<n;j++){
                if(a[j] % (1<<x[i]) == 0){
                    a[j] += (1<<(x[i]-1));
                }
            }
            maxx = x[i];  
        }

        for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<endl;
    }
}