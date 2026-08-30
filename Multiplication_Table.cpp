/*#include<bits/stdc++.h>
using namespace std;


int occurence_of_x(int n,int x){
    vector<vector<int>>mat(n, vector<int>(n));
    int cnt=0;
for(int i=0; i<n; i++){
    int low=0; 
    int high=n-1;

    while(low<=high){
        int mid= (low+high)/2;
if(mat[i][mid]==x)cnt++;
 else if(mat[i][mid]<x){
low= mid+1;
}
else {
    high= mid-1;
}
    }
}
return cnt;
}
int main(){
    int n,x;
    cin>>n>>x;
vector<vector<int>>mat(n,vector<int>(n));
   for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++){
       mat[i][j]=i*j;
    }
   }
cout<<occurence_of_x(n,x);

}
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int cnt=0;

    for(int i=1; i<=n; i++){
        if(x%i==0 && x/i<=n)cnt++;
    }

    cout<<cnt;
}