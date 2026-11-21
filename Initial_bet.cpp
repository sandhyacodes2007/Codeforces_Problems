#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, i,c=0;
    for( i=0; i<5; i++){
        cin>>a;
        c+= a;
    }
    cout<<((!(c%5) && c)? c/5: -1);

}



