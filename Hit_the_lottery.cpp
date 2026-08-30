#include<bits/stdc++.h>
using namespace std;
int func(int ind, int n, int cnt){
   int   bills[5]= {1,5,10,20,100};
if(n==0)return cnt;
   

   
   if(bills[ind]<n){
    int take= bills[ind]+ func(ind, n-bills[ind], cnt+1);
   }
   else{
   ind= ind-1;
}
}
int main(){
    int n;
    cin>>n;
    int ans= func(4, n, 0);
    cout<<ans<<endl;
}