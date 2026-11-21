#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;while(t--){
        int n,k;
        cin>>n>>k;
        int a[n+1];
        for(int i=1; i<=n; i++)cin>>a[i];
            int cur= a[k];

            int dist= a[k];
int t=0;
            sort(a+1, a+n+1);

            bool ans= true;

for(int i=1; i<=n; i++){
    if(a[i]<cur)continue;
    
    if(a[i]- cur>dist){
        ans= false;
    }
    cur= a[i];
}
if(ans)cout<<"YES"<<endl;
else cout<<"NO"<<endl;

        
    }
}