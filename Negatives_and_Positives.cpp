#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];

        }
        long long sum=0;
        long long minAbs= LLONG_MAX;
        int negcnt=0;
        bool haszero= false;
        for(int i=0; i<n; i++){
      sum+= abs(a[i]);

      minAbs= min(minAbs, abs(a[i]));
      if(a[i]<0)negcnt++;
      if(a[i]==0)haszero= true;
    }
            if(negcnt%2!=0 && !haszero){
                sum-=2*minAbs;
            }
        cout<<sum<<endl;
       
    }
     return 0;
}