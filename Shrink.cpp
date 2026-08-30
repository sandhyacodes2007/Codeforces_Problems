#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
    int n;
    cin >> n;
    vector<int> res(n);
    for (int i = 0; i < n; ++i) res[i]= i+1;
    swap( res[1], res[n-1]);
    for(auto &x: res){
    cout<<x<<endl;
    }
}
    return 0;
}