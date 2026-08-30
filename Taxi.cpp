#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }


int c1=0, c2=0, c3=0,c4=0;
for (int i=0; i<n; i++){
    int x;
    cin>>x;

if(x==1)c1++;
else if(x==2)c2++;
else if(x==3)c3++;
else c4++;

}
int taxis=0;
// group of 4
taxis+= c4;
    

    //group of 3+ group of 1
    taxis+= c3;
c1= max(0, c1-c3);

// pair group of 2
taxis+= c2/2;
c2%=2;

// one remaining group of 2
if(c2){
    taxis++;
    c1= max(0, c1-2);
}
//Remaining group of 1
taxis+= (c1+3)/4;
cout<<taxis<<endl;
return 0;

}