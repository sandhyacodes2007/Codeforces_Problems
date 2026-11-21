#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<long long>a(n+1);
        vector<long long>pref_sum(n+1);
        pref_sum[0]= 0;
        for(int i=1; i<=n; i++){
        cin>>a[i];
pref_sum[i]= pref_sum[i-1]+a[i];

    }

    long long s= pref_sum[n];
long long score= LLONG_MIN;
    for(int i=1; i<n; i++){
score= max(score , gcd(pref_sum[i], s-pref_sum[i]));
    }
    cout<<score<<endl;

}
}