#include<bits/stdc++.h>
using namespace std;
int sum(vector<int>& a){

    sort(a.begin(), a.end());
    int sum=0;
    int ans;
    for(int i=0; i<6; i++){
        sum+=a[i];
    }

ans= -sum + a[6];
return ans;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<int> a(7);
        for(int i=0; i<7; i++){
            cin>>a[i];
        }
       
int res= sum(a);
cout<<res<<endl;
    }
return 0;

}