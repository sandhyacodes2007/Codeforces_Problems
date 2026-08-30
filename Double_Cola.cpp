#include<iostream>
using namespace std;
main(int n){
    char *s[]={"Sheldon","Leonard","Penny","Rajesh","Howard"};
    cin>>n;
    while(n>5)
    n=n/2-2;
    cout<<s[--n];
}