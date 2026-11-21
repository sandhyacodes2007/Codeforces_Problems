
/*
int n,m,a=1;
int main(){
	//m stores the binary value of n
// 4->0
//7->1
int n,m,a=1;
	while(n){
		if(n%10==7){
        m+=a;
}
		m+=a;
		n/=10;
		a<<=1;
	}
	cout<<m<<endl;
}


int n; cin>>n;
//m stores the binary value of n
// 4->0
//7->1
int m=0;
int a=1;
int len=0;

int x=n;
while(n){
    len++;
    n/=10;
}

while(x){
    int digit= n%10;
    //7 is treated as 1
    if(digit==7){
        m+=a;
}
x/=10;
a<<=1;//a=a*2 shift one bit in a


}
// add 1 because m is 0 based
m++;
//add all lucky numbers having fewer digits
for(int i=1; i<len; i++){
    m+=(1<<i);//start with  1 and shift it left by i positions
}
cout<<m<<endl;
return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int m = 0;
    int a = 1;

    // Keep a copy because we need n later
    int temp = n;

    // Find number of digits
    int len = 0;

    while(temp) {
        len++;
        temp /= 10;
    }

    // Convert 4 -> 0 and 7 -> 1
    int x = n;

    while(x) {

        int digit = x % 10;

        // 7 is treated as 1
        if(digit == 7)
            m += a;

        // Remove last digit
        x /= 10;

        // 1 -> 2 -> 4 -> 8...
        a <<= 1;
    }

    // m is 0-based
    m++;

    // Add lucky numbers having fewer digits
    for(int i = 1; i < len; i++) {
        m += (1 << i);
    }

    cout << m << endl;

    return 0;
}