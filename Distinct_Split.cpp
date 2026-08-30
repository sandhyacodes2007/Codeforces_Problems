#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v(n);
        set<int>st;

        for(int i=n-1; i>=0; i--){
            st.insert(s[i]);
            v[i]= st.size();
        }

        st.clear();
        int maxi=0;
        for(int i=0; i<n-1; i++){
            st.insert(s[i]);
            maxi= max(maxi, (int)st.size()+ v[i+1]);
        }

        cout<<maxi<<endl;
        



    }
}