#include<bits/stdc++.h>
using namespace std;
vector<int> merger_array(vector<int>& nums1, vector<int>& nums2){
    int n= nums1.size();
    int m= nums2.size();
    vector<int>res(n+m);
    int l=0, r=0;
    while(l<n && r<m){
        if(nums1[l]<nums2[r]){
            res.push_back(nums1[l])
        }
    }


}