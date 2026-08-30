#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    const int x= 1000000000;
    while(t--){
        int n, l,r;

        cin>>n>>l>>r;
        vector<long long>v(n+1);
       for(int i=1; i<=n; i++)v[i]=i;
       int k= r-l+1;
       for(int i=l; i<r; i++)
       v[i]=x;
       if(k%2==0)
       v[r]= x;
       else v[r]=0;


       for(int i=1; i<=n; i++)
       cout<<v[i]<<" ";

    }
    return 0;
}
