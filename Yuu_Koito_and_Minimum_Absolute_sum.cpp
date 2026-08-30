
#include<bits/stdc++.h>
using namespace std;

int minpossiblevalue(vector<int>& a ){
int n= a.size();
int sum=0; 
vector<int> b(n-1);
for(int & x:a){
    if(x==-1){
        x=0;
    }
}
    for(int i=0; i<n-1; i++){
        b[i]= a[i+1]-a[i];
sum+= b[i];
    }
    

return abs(sum);

}
vector<int> diffarray(vector<int>& a){
    int n= a.size();
    for(int & x:a){
    if(x==-1){
        x=0;
    }
}
    return a;

}


int main(){
    int t;
    cin>>t;
    while(t--){

    int n;
    cin>>n;

    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
int ans=  minpossiblevalue(a);
cout<<ans<<endl;
vector<int> res=  
 diffarray(a);
 for(int  it: res){
    cout<<it<<endl;
 }

}
return 0;
}