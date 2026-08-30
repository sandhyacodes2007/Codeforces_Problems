/*#include<iostream>
#include<numeric>
#include<vector>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1; i<=n; i++){
            cin>>a[i];
        }
      
      int max_val= -1;
for(int l=n; l>=1;l--){
    for(int r=n; r>=1; r--){

    
if(gcd(a[l],a[r])==1){
    max_val= max(max_val, l+r);
    
} }
}

cout<<max_val<<endl;

    }

}

*/
#include<bits/stdc++.h>

using namespace std;
int main(){
    int T;
    scanf("%d",&T);
    while(T--){
        int n;
        scanf("%d",&n);
        map<int,int>t;
        for(int i=0;i<n;++i){
            int c;
            scanf("%d",&c);
            t[c]=i+1;
        }
        int a=-1;
        for(int i=0;i<1001;++i){
            for(int j=i;j<1001;++j){
                if(gcd(i,j)==1&&t[i]>0&&t[j]>0){
                    a=max(t[i]+t[j],a);
                }
            }
        }
        printf("%d\n",a);}}
