#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++)cin>>a[i];

        vector<int>ans;
        int maxi=INT_MIN;

        for(int i=0; i<n; i++){
            if(a[i]>maxi)maxi= a[i];
        ans.push_back(a[i]);

        }
        ans.erase(find(ans.begin(), ans.end(), maxi));

    int sum=0;
        for(int i=0; i<ans.size()-1; i++){
            sum+= abs(ans[i]-ans[i+1]);
        }
        cout<< sum<<endl;



    }
}