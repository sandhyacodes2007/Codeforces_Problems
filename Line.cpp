#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        string s;
        cin>>s;
        long long sum=0;
        vector<long long>ans;

        for(int k=1; k<=n; k++){
            if(s[k]=='L'){
                sum+=k-1;
                ans.push_back((n-k)-(k-1));//flip ka gain
            }
            else{
                sum+= n-k;
                ans.push_back((k-1)-(n-k));
            }
        }


        sort(ans.rbegin(), ans.rend());
for(int k=0; k<n;k++){
    if(ans[k]>0)sum+=ans[k];
    cout<<sum<<" ";
}
cout<<endl;
    }
}




















/*
val= sum;
        for(int k=1; k<=n; k++){
            if(k<n/2){
if(s[k]=='L'){
val-=k-1;
val+=n-k;
ans.push_back(val);

            }
            else{
                if(ans.empty()){
                ans.push_back(val);
            }
            else{
                ans.push_back(ans.back());
            }
        }

    }
        else{
            if(s[k]=='R'){
                val= val-(n-k);
                val+=k-1;
                ans.push_back(val);
            }
            else{
                ans.push_back(val);
            }
        }
    }
        for(auto it:ans){
            cout<<it<<" " <<endl;
        }

    }
}
    */