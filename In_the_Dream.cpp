/*#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin>>a>>b>>c>>d;
        int x= c-a;//score of Rio's at the second half
        int y= d-b;//score of kdio's at the second half

        if(a==b && b==c && c==d&& d==a){
            cout<<"YES"<<endl;

        }
        else if(a==0 || b==0 && c==0 || d==0){
            cout<<"NO"<<endl;
        }

        else if( abs(a-b)<=2 && abs(x-y)<=2)
        cout<< "YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

bool valid(int r, int k) {
    return max(r, k) <= 2 * min(r, k) + 2;
}

int main() {

    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;

        int x = c - a; //Rios score in second half
        int y = d - b; // KDOI score in second half

        if (valid(a, b) && valid(x, y))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
