/*#include<bits/stdc++.h>
using namespace std;
void a_is_palindrome(int x){
    int flag= false;
    string s= to_string(x);
    string m=reverse(s.begin(), s.end());
    if(s==m)flag=true;
    
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b;
        int ok= true;
        if(b%12==0){
            a= n-b;
            if(!a_is_palindrome(a))
            return ok= false;
            

        }
        if(ok)cout<<a<<" "<<b<<endl;
        else cout<<-1<<endl;
    }


}*/
#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    vector<long long> palindrome= {
        0, 1, 2, 3, 4, 5,
        6, 7, 8, 9, 22, 11
    };

    while (t--) {
        long long n;
        cin >> n;

        long long a = palindrome[n % 12];

        if (a > n) {
            cout << -1 << endl;
        } else {
            cout << a << ' ' << n - a << endl;
        }
    }

    return 0;
}