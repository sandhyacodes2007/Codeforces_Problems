#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        long long sum=0;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            sum+=x;
        }

        if(((sum%4)+4)%4==0)// if sum divisible by 4 (4 because (1,1)->(-1,-1) and (-1,-1)->(1,1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}