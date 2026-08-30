
/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;


        for(int i= n-k-1; i>=0; i--){
            if(s[i+k]!=0){

            s[i]= s[i]^1;
            s[i+k]^=1;
        }
    }
    bool ok= (count(s.begin(),s.end(),'0')==n);
        cout<<(ok?"YES":"NO")<<endl;
    }
}
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        bool ok = true;

        for (int pa = 0; pa < k; pa++) {
            int ones = 0;

            for (int i = pa; i < n; i += k) {
                if (s[i] == '1') ones++;
            }

            if (ones & 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }

    return 0;
}