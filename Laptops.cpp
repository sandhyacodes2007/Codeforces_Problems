#include <iostream>
using namespace std;

int n,x,y;
bool z=0;
int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x>>y;
        if(x!=y)z=1;
    }
    cout<<(z?"Happy Alex":"Poor Alex");
}