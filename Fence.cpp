#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>h(n);
    for(int i=0; i<n; i++){
        cin>>h[i];
    }
int sum=0;
for(int i=0; i<k; i++){
    sum+= h[i];

}
int mini= sum;
int l=0; int r= k;

int min_index= l;
while(r<n){
    sum=sum-h[l];
    sum+=h[r];
    l++;
    r++;
    if(sum<mini){
        min_index= l;
        mini= sum;
    }
}
cout<<min_index+1<<endl;
}