#include<bits/stdc++.h>
using namespace std;

    vector<int> primes;
    vector<int> prefix;


    void solve(int x) {

        primes.assign(x + 1, 1);

        primes[0] = 0;
        primes[1] = 0;

        for(int i = 2; i * i <= x; i++) {

            if(primes[i] == 1) {

                for(int j = i * i; j <= x; j += i) {
                    primes[j] = 0;
                }
            }
        }

        prefix.assign(x + 1, 0);

        for(int i = 1; i <= x; i++) {
            prefix[i] = prefix[i - 1] + primes[i];
        }
    }

    vector<int> primesInRange(vector<vector<int>>& queries) {

        int maxR = 0;

        // First find maximum r
        for(auto &query : queries) {
            maxR = max(maxR, query[1]);
        }

        // Then calculate primes up to maxR
        solve(maxR);

        vector<int> ans;

        // Answer each query
        for(auto &query : queries) {

            int l = query[0];
            int r = query[1];

            int cnt = prefix[r] - prefix[l - 1];

            ans.push_back(cnt);
        }

        return ans;
    }
    int main(){

    }

int main() {
    int q;
    cin >> q;

    vector<vector<int>> queries(q);

    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;

        queries[i] = {l, r};
    }


    vector<int> ans = obj.primesInRange(queries);

    for(int x : ans) {
        cout << x << endl;
    }

    return 0;
}