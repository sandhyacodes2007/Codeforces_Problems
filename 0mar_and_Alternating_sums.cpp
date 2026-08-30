#include<bits/stdc++.h>
using namespace std;
const long long MOD= 1e9 +7;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        long long ans= 1;
        long long pcnt=0;
        long long preD= LLONG_MIN;

        for(int i=0; i<n; i++){
            if(i>0 && a[i]==a[i-1]){
                ans= ans*2 %MOD;
            }
            else{
                if(i>0 && a[i]== preD +1){
                    pcnt++;
                }
                preD= a[i];
            }
        }

        long long validT= 1+(a[0]==-1 ?pcnt:0);
        ans= ans*(validT%MOD)%MOD;
        cout<<ans<<endl;
    }
    return 0;
}