/*#include<bits/stdc++.h>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int n;
    cin>>n;
   
    vector<int>r(n),prefix1(n);
    prefix1[0]=0;
    for(int i=1; i<=n; i++){
        cin>>r[i]>>prefix1[i];

    }
    prefix1[i]= prefix1[i-1]+ r[i];

vector<int>b(m),prefix2(n);
prefix2[0]= 0;
for(int i=1; i<=m; i++){
    cin>>b[i]>>prefix2[i];
}
prefix2[i]= prefix2[i-1]+ b[i];
int max1= *max_element(prefix1.begin(), prefix1.end());
int max2= *max_element(prefix2.begin(),prefix2.end());
int sum= max1+max2;

cout<<sum<<endl;


}
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> r(n);
        int sum = 0, max1 = 0;

        for (int i = 0; i < n; i++) {
            cin >> r[i];
            sum += r[i];
            max1 = max(max1, sum);
        }

        int m;
        cin >> m;

        vector<int> b(m);
        sum = 0;
        int max2 = 0;

        for (int i = 0; i < m; i++) {
            cin >> b[i];
            sum += b[i];
            max2 = max(max2, sum);
        }

        cout << max1 + max2 << '\n';
    }

    return 0;
}