#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        string s;cin>>s;
char cur='R';
int cnt=0;
for(int i=0; i<n ; i++){
    if(s[i]!=cur)
    {
        cnt++;
        cur=s[i];

}
cur= (cur =='R')?'B':'R';

    }

    cout<<cnt<<endl;
}
}