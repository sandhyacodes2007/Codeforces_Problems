/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
     int l,r;
     cin>>l>>r;

     int a=1, b=l;
     bool found=false;
     while(a<b){
        if(a+b  >=l && a+b<=r && gcd(a ,b)!=1){
        cout<<a<<" "<<b <<endl;
        found=true;
        break;
        }
        else if(a+b <l){
            a++;
        }
        else{
         b--;
     }
    }
     if(!found)cout<<-1<<endl;

    
}
}
*/






#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int l,r;
        cin>>l>>r;

        int s = (r%2==0) ? r : r-1;
        if(s>=l && s>=4){
            cout<<s/2<<" "<<s/2<<endl;
            continue;
        }
        // yahan l==r odd hai (ya chhota case)
        bool found=false;
        for(int p=2; p*p<=l && l<=r; p++){
            if(l%p==0){
                cout<<p<<" "<<l-p<<endl;
                found=true;
                break;
            }
        }
        if(!found) cout<<-1<<endl;
    }
}