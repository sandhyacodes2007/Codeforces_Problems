#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==2 )cout<<2<<endl;
        else if(n==3)cout<<3<<endl;
        else if(n%2==0)cout<<0<<endl;
        else 
        cout<<1<<endl;
    }
    return 0;
}

/*
int  Max_value( vector<int>& a){
    int n= a.size();
    vector<int> prefixMax(n);
    int maxel=a[1];
    int maxIdx=1;
    for(int i=1; i<=n; i++){
        if(a[i]> maxel){
            maxel= a[i];
maxIdx= i;
        }
    }
        swap(a[maxIdx], a[1]);
    
    prefixMax[0]=0;
    int sum=prefixMax[0];
    for(int i=1; i<=n; i++){
        prefixMax[i]= max(prefixMax[i-1], a[i]);
        sum+=prefixMax[i];
    }
    return sum;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
int ans= Max_value( a);
cout<<ans<<endl;

    }
    return 0;
}
    */