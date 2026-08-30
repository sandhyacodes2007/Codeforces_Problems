#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];

        int d=0, sumD=0, sumA=0;
        for(int i=0;i<n;i++){
            sumA+=a[i];
            if(a[i]!=b[i]){
                d++;
                sumD+=a[i];
            }
        }

        if(d==0)cout<<0<<endl;
        else if(sumA%2==1 && d==n)cout<<1<<endl;
        else if(sumA%2==0 && sumD%2==0)cout<<2<<endl;
      
        
        else cout<<-1<<endl;
    }

}

