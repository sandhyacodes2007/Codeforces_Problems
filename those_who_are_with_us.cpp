#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
int t;
cin>>t;
while(t--){
    int n, m;
    cin>>n>>m;
    vector<vector<int>> a(n, vector<int> (m));
    
            int mx=0;
            int cnt_max=0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>a[i][j];
if(a[i][j]>mx){
    mx= a[i][j]; cnt_max=1;
        }
    else if(a[i][j]==mx){
    cnt_max++;
    }
}

        
    }
    vector<int> r(n), c(m);
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
if(a[i][j]==mx)
r[i]++;
c[j]++;
        }
    }

int flag=0;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++) {

if(r[i]+c[j]- (a[i][j]-mx))
    

