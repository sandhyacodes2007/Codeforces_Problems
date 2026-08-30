#include<bits/stdc++.h>
using namespace std;
int upper_bound(vector<int>& x, int s){
    int low=0;
    int high= x.size()-1;
    int ans=x.size();
    while(low<=high){
int mid= (low + high)/2;

if(x[mid]>s){
    ans= mid;
    high= mid-1;
}
else low= mid+1;
    }
    return ans;
}
int main(){
int n;
cin>>n;

vector<int>x(n);
for(int i=0; i<n;i++) cin>>x[i]; 

int q;
cin>>q;
vector<int>m(q);
for(int i= 0; i<q; i++)cin>>m[i];

sort(x.begin(),x.end());
for(int i=0; i<q; i++){
    cout<<upper_bound(x, m[i])<<endl;
}
 
return 0;
}