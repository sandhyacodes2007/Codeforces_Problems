#include<bits/stdc++.h>
using namespace std;
int main(){
    int T;cin>>T;
    while(T--){
        int n;int x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        sort(a.begin(),a.end());
       
        if(a[n-1]<x){
        cout<<0<<endl;
        continue;
    }

    int m= lower_bound(a.begin(),a.end(),x)-a.begin();
    long long p=0;
    for(int i=m; i<n; i++)p+= (a[i]-x);
    int cnt= n-m;


    int l= m-1;
    while(l>=0){
        long long d= x-a[l];
        if(d<=p){
            cnt++;
            p= p-(d);
            l--;
        }
        else{
            break;
        }
    }

    cout<<cnt<<endl;
}
}