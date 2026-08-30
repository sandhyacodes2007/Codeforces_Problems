#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n, x,y;
    cin>>n>>x>>y;
    x--,y--;
    
vector<int> a,b;
for(int i=0; i<n; i++)
{
    int j;
    cin>>j;
    if(i<=x || i>y)b.push_back(j);
    else 
    a.push_back(j);
    
}
if(!a.empty()) rotate(a.begin(), min_element(a.begin(), a.end()), a.end());


int m= a.empty()?-1:a[0];
auto it= b.begin();
if(it!= b.end() &&(*it)<m )it++;
else
b.insert(it, a.begin(), a.end());
for(int i=0; i<n; i++){
    cout<<a[i]<<"\n";
}
}

signed   main(){
    int t=1; 
    cin>>t;
    while(t--)solve();

}