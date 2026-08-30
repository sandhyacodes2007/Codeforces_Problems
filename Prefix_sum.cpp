#include<bits/stdc++.h>
using namespace std;
int main(){

    // TC= O(N)+O(t)
        int n;
        cin>>n; 
        vector<int> a(n),pfS(n);
        pfS[0]=0;
        for(int i=1; i<=n; i++){
            cin>>a[i];
            pfS[i]= pfS[i-1]+a[i];
        }
        int l, r;
        cin>>l>>r;
        
        cout<<pfS[r]-pfS[l-1]<<endl;
    }



    //O(N)+O(t*N) = 10^10 that is the reason of TLE in brute force 
