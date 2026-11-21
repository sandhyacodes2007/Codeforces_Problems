#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
int t;cin>>t;while(t--){
    ll n, k,b,s;
    cin>>n>>k>>b>>s;

    ll bk= b*k;
    ll r= s-bk;

    if(bk>s || r>(n-1)*(k-1)){
        cout<<"-1"<<endl;
        continue;
    }
    cout<<bk;
    for(ll i=1; i<n; i++){
        ll t2= min(r, k-1); cout<<" "<<t2; r-=t2;}
        cout<<endl;
    }

}



#include<bits/stdc++.h>
using namespace std;
long long t,n,k,b,s;
int main(){
cin>>t;
while(t--){
cin>>n>>k>>b>>s;
if(b*k>s||s>b*k+n*(k-1)){
cout<<"-1"<<endl;
continue;
}
s=s-b*k;
for(long long i=1;i<n;i++){
cout<<min(s,k-1)<<" ";
s=s-min(s,k-1);
}
cout<<s+b*k<<endl;
}
}