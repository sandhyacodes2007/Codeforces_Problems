#include<bits/stdc++.h>
using namespace std;

bool check(string &s, string &t){
    int n = s.size();
    int l = -1, r = -1;

    for(int i = 0; i < n; i++){
        if(s[i] != t[i]){
            if(l == -1) l = i;
            r = i;
        }
    }
    

    if(l == -1) return true; // already alternating

    // check if all mismatches are inside [l, r]
    for(int i = l; i <= r; i++){
        if(s[i] == t[i]) return false;
    }

    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n = s.size();
        string t1 = "", t2 = "";

        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                t1 += 'a';
                t2 += 'b';
            } else {
                t1 += 'b';
                t2 += 'a';
            }
        }

        if(check(s, t1) || check(s, t2))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}