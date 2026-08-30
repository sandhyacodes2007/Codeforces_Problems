#include<bits/stdc++.h>
using namespace std;
int main(){
    int c,v0, v1,a,l;
    cin>>c>>v0>>v1>>a>>l;
    
    int pages=0;
    int speed=v0;
    int days=0;
    while(pages<c){
        days++;
        pages+= speed;
        if(pages>=c)break;
        pages-=l;
        speed= min(v1, speed+a);
    }
    cout<<days<<endl;
    return 0;


}