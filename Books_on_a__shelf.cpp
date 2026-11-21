/*
#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<int> h(n);
        for(int i=0; i<n; i++)cin>>h[i];


        unordered_map<int,int>mpp;
        for(int i=0; i<n; i++){
            mpp[h[i]]++;
        }
        vector<int>larr, rarr, midarr;
for(auto it: mpp){
    larr.push_back(it.first);

    if(it.second>=2)
    {
        rarr.push_back(it.first);
    }
    for(int i=3; i<=it.second; i++){
        midarr.push_back(it.first);
    }

    
}
int len= larr.size()+rarr.size();
cout<<len;
reverse(rarr.begin(), rarr.end());

vector<int>ans;
ans.insert(ans.end(), larr.begin(), larr.end());
ans.insert(ans.end(), midarr.begin(), midarr.end());
ans.insert(ans.end(), rarr.begin(), rarr.end());

for(int i=0; i<n; i++){
    cout<<ans[i]<<endl;
}




    }
}
*/

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    int t; cin>>t;while(t--){
        int n; cin>>n;
        vector<int> h(n);
        for(int i=0;i<n;i++) cin>>h[i];

        map<int,int> mpp;
        for(int i=0;i<n;i++) mpp[h[i]]++;

        vector<int> larr,rarr,midarr;

        for(auto it:mpp){
            larr.push_back(it.first);

            if(it.second>=2)
                rarr.push_back(it.first);

            for(int i=2;i<it.second;i++)
                midarr.push_back(it.first);
        }

        reverse(rarr.begin(),rarr.end());

        vector<int> ans;
        ans.insert(ans.end(),larr.begin(),larr.end());
        ans.insert(ans.end(),midarr.begin(),midarr.end());
        ans.insert(ans.end(),rarr.begin(),rarr.end());

        for(int x:ans) cout<<x<<" ";
        cout<<endl;
    }
}
