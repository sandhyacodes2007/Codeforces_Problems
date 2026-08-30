#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n ;i++){
            cin>>a[i];
        }

        unordered_map<int,int>freq;

        for(int x: a){
            freq[x]++;

        }
        int maxfreq=0;
        for(auto it: freq){
            if(it.second>maxfreq){
            maxfreq= it.second;
        }

    }
    int distinct= freq.size();
    if(maxfreq== distinct)cout<<maxfreq-1<<endl;
    else cout<<min(maxfreq,distinct)<<endl;

    
}
return 0;
}