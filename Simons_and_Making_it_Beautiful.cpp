/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>p(n), prefixMx(n);
     prefixMx[0]=0;
    for(int i=1; i<=n; i++){
        cin>>p[i];
    
   
    prefixMx[i]= max(prefixMx[i-1], p[i]);
    }

    for(int i=1; i<=n; i++){
       int j=1;
       
        if(prefixMx[i]==i)swap(p[i], p[j]);
        j++;
    }
}
for(auto & it: p)
    cout<<it<<"\n";


    
     return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    vector<int>p(n), prefixMx(n);
     prefixMx[0]=0;
    for(int i=1; i<=n; i++){
        cin>>p[i];
    
   
    prefixMx[i]= max(prefixMx[i-1], p[i]);
    }

    for(int i=1; i<=n; i++){
      auto it= max_element(p.begin()+1, p.begin()+i);
       
        if(prefixMx[i]==i)swap(p[i],*it);
      
    }

for(auto & it: p)
    cout<<it<<"\n";

    }
    
     return 0;
}