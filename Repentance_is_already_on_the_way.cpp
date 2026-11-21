#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<long long>a(n+2),b(n+2),suf(n+2,0);
        for(int i=1; i<=n; i++)cin>>a[i];
        for(int i=1; i<=n; i++)cin>>b[i];
        for(int i=n-1; i>=1; i--){
            suf[i]=suf[i+1]+(a[i]==b[i+1]?2:1)+(b[i]==a[i+1]?2:1);
        }
        long long last=(a[n]==b[n]?2:1);
        long long e=0,thegrilla=0;
        for(int i=1; i<=n; i++){
            thegrilla=max(thegrilla,e+suf[i]+last);
            if(i<n)e+=(a[i]==b[i]?2:1)+(b[i]==a[i+1]?2:1);
        }
        cout<<thegrilla<<endl;
    }
}