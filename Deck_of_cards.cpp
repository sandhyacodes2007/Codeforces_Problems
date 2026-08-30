#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;


        string s;

        cin>>s;
        k= s.size();

        int cnt0=0, cnt1=0, cnt2=0;
        for(char c: s){
            if(c=='0')cnt0++;

            else if(c=='1')cnt1++;
            else  cnt2++;
        }
int top_min=cnt0;
int top_max= cnt0+ cnt2;
int bottom_min= cnt1;
int bottom_max= cnt1+cnt2;
 

string res;
res.reserve(n);
for(int i= 1; i<=n; i++){
    if(i<=top_min)res.push_back('-');
    else if(i>n-bottom_min)res.push_back('-');
    else if(i>top_max && i<=n-bottom_max)res.push_back('+');
    else res.push_back('?');
}

cout<<res<<endl;
    }
    return 0;
}



