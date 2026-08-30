
#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main() {
  ll t;
  cin>>t;

  while(t--) {
    ll n;
    cin>>n;

    string s;
    cin>>s;

    vector<string> str= {"1001" , "1100" , "0011" , "0110"};
    ll cnt = 0;
    for(auto it : str) {
      bool f = true;
      for(int i=0; i<n; i++) {
        if(s[i] != '?' && s[i] != it[i % 4]) {
          f = false;
          break;
        }
      }

      if(f) {
        cnt++;
      }
    }

    cout<<cnt<<endl;
  }
  return 0;
}