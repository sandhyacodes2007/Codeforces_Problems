/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<int>p(n+1);
        for(int i=1; i<=n; i++){
            cin>>p[i];
        }
        bool ok= false;
        for(int i=1; i<=n-2 && !ok; i++){
            if(i==p[i])continue;
            
            for(int j= i+2; j<=n; j++){
            
                if(i== p[j]&& j==p[i]){
                    ok= true;
                    break;
            
        }
    }
}
        cout<<(ok? "YES":"NO")<<endl;
    

    }
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        vector<int> p(n+1);
        for(int i=1;i<=n;i++) cin>>p[i];

        vector<int> M;
        for(int i=1;i<=n;i++)
            if(p[i]!=i) M.push_back(i);

        bool ok=true;
        int m=M.size();
        for(int k=0;k<m;k++){
            if(p[M[k]] != M[m-1-k]){
                ok=false;
                break;
            }
        }
        cout<<(ok?"YES":"NO")<<"\n";
    }
    return 0;
}