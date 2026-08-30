/*#include<iostream>
using namespace std;
bool isPossible(int x, int y){
    for(int n=1; n<=2000000; ++n){
        int sum_n=0, sum_n1=0, temp=n,  temp1= n+1;
while(temp>0){
    sum_n+=temp%10;
    temp/=10;
}
while(temp1>0){
    sum_n1+= temp1%10;
    temp/=10;
}
if(sum_n==x && sum_n1==y)
return true;
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y;
        cin>>x>>y;
       
        cout<<(isPossible(x,y)?"YES": "NO")<<endl;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;

// Function to compute the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool isPossible(int x, int y) {
    // Iterate through a reasonable range to find a valid n
    for (int n = 1; n <= 1000000; ++n) {
        if (sumOfDigits(n) == x && sumOfDigits(n + 1) == y) {
            return true;
        }
    }
    return false;
}

int main() {
    int t;
    cin >> t;  // Read number of test cases

    while (t--) {
        int x, y;
        cin >> x >> y;  // Read x and y for the test case
        cout << (isPossible(x, y) ? "YES" : "NO") << endl;
    }

    return 0;
}
