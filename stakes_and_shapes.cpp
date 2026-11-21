#include<iostream>
#include<string> 
#include<math.h>
#include<algorithm>
using namespace std;

int main(){
    int t;cin>>t;while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        int t_r= x+y+z;
        char move='R';

        if(z<=y){
            move='R';
        }
        else if(y<=x){
            move='P';
        }
        else if(x<=z){
            move='S';
        }

        string res(t_r, move);
        cout<<res<<endl;

    }
}