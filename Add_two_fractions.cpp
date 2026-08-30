#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(b==0)return a;
    return gcd(b,a%b);
}
    string addFractions(string frac1, string frac2) {
     int num1, deno1;
     sscanf(frac1.c_str(), "%d/%d", &num1,&deno1);
     int num2,deno2;
     sscanf(frac2.c_str(), "%d/%d", &num2,&deno2);
     int lcm= (deno1*deno2)/gcd(deno1, deno2);
    int num= num1*(lcm/deno1)+ num2*(lcm/deno2)
    int den= lcm;
    return num/den;
    }
    int main(){
        string frac1,frac2;
        cin>>frac1>>frac2;
        string ans=  addFractions( frac1, frac2);
        cout<<ans<<endl;
    }