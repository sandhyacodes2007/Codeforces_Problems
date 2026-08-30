#include<bits/stdc++.h>
using namespace std;
int main(){
    int s, n;
    cin>>s>>n;
    vector<pair<int,int>> d(n);
    for(int i=0; i<n; i++){
        
        cin>>d[i].first>>d[i].second;
    }
    bool ok=true;
    sort(d.begin(), d.end());
for(int i=0; i<n; i++){
    int x= d[i].first;
    int y= d[i].second;
        if(s<=x){
        ok= false;
        break;
        } 
        else 
        {
            s= s+y;
        ok= true;
        }}
    cout<<(ok?"YES":"NO")<<endl;
    }

    


