#include<iostream>
#include<vector>
#include<string>
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
taxis+= c4;
    taxis+= c3;
c1= max(0, c1-c3);

taxis+= c2/2;
c2%=2;
if(c2){
    taxis++;
    c1= max(0, c1-2);
}
taxis+= (c1+3)/4;
cout<<taxis<<endl;
return 0;

}