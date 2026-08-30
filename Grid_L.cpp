#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int p,q;
        cin>>p>>q;
        bool found= false;
        for(long long n=1; n<=1e5; n++){
            long long num= (p+2*q -n);
        
            if(num<=0 || num%(2*n+1))continue;
            long long m= num/(2*n+1);
            if(m<n)break;
        
            long long qmax= n*(1+n)+n*(m-n);
            if(qmax<q)continue;
        
            cout<<n<<" "<<m<<endl;
found=true;
break;
        }
        if(!found)
       cout<<-1<<endl;

        }
    
    return 0;
}