/*#include<bits/stdc++.h>
using namespace std;
bool check(int m, int x, int s, const string& u){
    vector<vector<int>> dp(m+1, vector<int>(x+1, -1));
    dp[0][0]=0;

    for(char c:u){
        auto ndp= dp;//skip current person

        for(int len=0; len<m; len++){
            for(int started=0; started<=x; started++){
                if(dp[len][started]==-1)continue;

                int free= dp[len][started];
                

                //I or A starts a new table
                if((c=='I' || c=='A') && started<x){
                    ndp[len+1][started+1]= max(ndp[len+1][started +1], free+(s-1));
                }

                //E or A sits at a non - empty table
                if((c=='E'||c=='A') && free>0)ndp[len+1][started]= max(ndp[len+1][started], free-1);
            }
        }
        
    
    dp.swap(ndp);
    }
     for (int started = 0; started <= x; started++) {
        if (dp[m][started] >= 0) return true;
    }

    return false;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, x, s;
        cin >> n >> x >> s;

        string u;
        cin >> u;

        int lo = 0, hi = n, ans = 0;

        while (lo <= hi) {
            int mid = (lo + hi) / 2;

            if (check(mid, x, s, u)) {
                ans = mid;
                lo = mid + 1;
            } else {
                hi = mid - 1;
            }
        }
        cout<<ans<<endl;
    }
    return 0;


}*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll s, t;

ll eval(string &S, int m) {
    ll tables = 0;   // opened tables
    ll seated = 0;   // seated people

    for (char c : S) {
        if (c == 'I') {
            if (tables < t) {
                tables++;
                seated++;
            }
        }
        else if (c == 'E') {
            if (seated < tables * s) {
                seated++;
            }
        }
        else { // 'A'
            if (m > 0) {   // treat as Introvert
                m--;

                if (tables < t) {
                    tables++;
                    seated++;
                }
            }
            else {         // treat as Extrovert
                if (seated < tables * s) {
                    seated++;
                }
            }
        }
    }

    return seated;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n >> t >> s;

        string S;
        cin >> S;

        int cntA = 0;
        for (char c : S)
            if (c == 'A')
                cntA++;

        ll ans = 0;

        for (int m = 0; m <= cntA; m++) {
            ans = max(ans, eval(S, m));
        }

        cout << ans << '\n';
    }

    return 0;
}