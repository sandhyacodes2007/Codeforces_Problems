
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

    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n >> t >> s;

        string S;
        cin >> S;

        int l = 0, r=0;
        for (char c : S)
            if (c == 'A')
                r++;

        ll ans = 0;
while(l<r){
    int m= (l+r)/2;
    if(eval(S,m)<eval(S,m+1))l=m+1;
    else r=m;
}
        cout << eval(S,l) << '\n';
    }

    return 0;
}
/*

Increasing m means more ambiverts are used to open tables.
Initially this is good because extroverts need non-empty tables.
After enough tables are opened, converting more ambiverts into introverts wastes seats that could have been filled later.
Therefore the gain from increasing m eventually becomes non-positive.

So there is a single peak.

in easy version try all values 0 to cntA as an introvert  taking time complexity - A.n
int hard version 
Hard version

Since f(m) is unimodal, use ternary-search style binary search:

while(l < r)
{
    int m = (l+r)/2;

    if(eval(S,m) < eval(S,m+1))
        l = m+1;
    else
        r = m;
}

This finds the peak of the unimodal function.

Complexity:

eval() = O(n)
Binary search over m = O(log A)
*/