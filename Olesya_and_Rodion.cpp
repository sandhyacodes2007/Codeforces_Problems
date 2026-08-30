#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    cin>>n>>t;
    string  res="";
    if(t==10 && n==1)cout<<-1<<endl;
else if(t==10 && n!=1){
    res+= '1';
    for(int i=0; i<n-1; i++){
        res+='0';
    }

}
else{
    while(n!=0){
res+=to_string(t);
n--;
}
}

cout<<res<<endl;
}