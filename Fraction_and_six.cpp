#include<iostream>
#include<string>
#include<algorithm>
#include<math.h>
using namespace std;
int main(){
int t;cin>>t;while(t--){
    int n,m;
    cin>>n>>m;
    string p;
    string q;
    cin>>p>>q;


    q+="six";
    sort(p.begin(), p.end());
    sort(q.begin(), q.end());

if(p==q)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}