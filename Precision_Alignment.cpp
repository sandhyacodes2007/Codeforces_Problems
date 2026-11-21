#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        long long n,k;cin>>n>>k;
        vector<long long>a(n),b(n),c(n);
        long long mn=LLONG_MAX;
        for(int i=0; i<n; i++){
            cin>>a[i]>>b[i]>>c[i];
            mn=min(mn,a[i]+b[i]+c[i]);
        }
        long long l=mn,r=mn+k;
        while(l<r){
            long long T=l+(r-l+1)/2,sum=0;
            bool ok=true;
            for(int i=0; i<n; i++){
                long long s=a[i]+b[i]+c[i];
                if(T<=s)continue;
                long long cost=T-s;
                if(a[i]<=b[i]&&b[i]<=c[i]){
                    if(a[i]==c[i]){ok=false;break;}
                    long long d=(a[i]<b[i])?min(c[i]-b[i]+1,b[i]-a[i]+1):1;
                    cost+=2*d;
                }
                sum+=cost;
                if(sum>k){ok=false;break;}
            }
            if(ok)l=T;
            else r=T-1;
        }
        cout<<l<<endl;
    }
}