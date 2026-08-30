#include<bits/stdc++.h>
using namespace std;
int main(){
    int k;
    cin>>k;
    string res= "";
    int n= 10-k;
    res+=to_string(k);
    res+= to_string(n);
    int m= stoi(res);
    cout<<m<<endl;
}
// if digit is more than two then


#include<bits/stdc++.h>
using namespace std;

int digitSum(int x){
    int s = 0;
    while(x > 0){
        s += x % 10;
        x /= 10;
    }
    return s;
}

int main(){
    int k;
    cin >> k;
    int count = 0;
    int num = 0;
    while(count < k){
        num++;
        if(digitSum(num) == 10){
            count++;
        }
    }
    cout << num << endl;
}