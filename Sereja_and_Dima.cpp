#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
     cin>>a[i];
    }
    int l=0; 
    int r=n-1;
    int spoints=0;
    int dpoints=0;
    int cnt=0;
    while(l<=r){
        // if  odd  move then its sereja's move
        int pick;
        if(a[l]<a[r]){
        pick= a[r];
        r--;
        
        }
        else{
            pick=a[l];
        l++;
        }
        if(cnt%2==0)spoints+=pick;
        else{
        dpoints+=pick;
        }
     



  cnt++;  
}
    
    cout<<spoints<<" "<<dpoints<<endl;
}
