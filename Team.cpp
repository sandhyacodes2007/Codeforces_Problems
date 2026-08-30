#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int cnt = 0;
    for(int i = 0; i < n; i++){
        int x, y, z;
        cin >> x >> y >> z;

        if(x + y + z >= 2) cnt++;
    }

    cout << cnt << endl;
    return 0;
}