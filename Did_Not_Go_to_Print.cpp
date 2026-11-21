#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        string s;cin>>s;
        stack<int> st;
        vector<bool> printed(n+1,false);
        for(int i=1;i<=n;i++){
            char c=s[i-1];
            if(c=='1')st.push(i);
            else if(c=='2'){
                if(st.empty())printed[i]=true;
                else{printed[st.top()]=true;st.pop();}
            }
            else printed[i]=true;
        }
        vector<int> res;
        for(int i=1;i<=n;i++)if(!printed[i])res.push_back(i);
        cout<<res.size()<<"\n";
        for(int x:res)cout<<x<<" ";
        cout<<"\n";
    }
}