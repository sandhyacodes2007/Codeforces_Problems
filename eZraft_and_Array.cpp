#include<bits/stdc++.h>
using namespace  std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n==1)cout<<1<<endl;
        else if(n==2)cout<<-1<<endl;
else
{
    vector<long long>a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    long long s= 6;
    for(int i=4; i<=n; i++){
        a.push_back(s);
        s= s*2;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

    }
    return 0;
}