#include<bits/stdc++.h>
using namespace std;
int right_maximum(vector<int>& a){
    int n= a.size();
    
    int mx= *max_element(a.begin(), a.end());
    for(int i=0; i<n; i++){
        if(a[i]<a[i+1])
        {
            return a.size();
    }

    for()
}