#include<iostream>
#include<vector>
using namespace std;
int main(){
    int t;
    cin>>t;
       vector<string>results;
    while(t--){
string W;
cin>>W;
if(W.size()>=2 && W.size()<=10){
W.replace(W.size()-2, 2, "i" , 1);
}
results.push_back(W);
    }
    for(const string &word : results){
        cout<<word<<endl;
    }
    return 0;
}