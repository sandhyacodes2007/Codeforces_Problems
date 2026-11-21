
#include<bits/stdc++.h>
using namespace std;

int main(){
    int T;
    cin>>T;
    while(T--){
        int n,k,a[105],b[105],x=0,y=0;
        cin>>n>>k;

        for(int i=1;i<=n;i++){
            cin>>a[i];
            if(a[i]%2==0)x++;
        }

        for(int i=1;i<=n;i++){
            cin>>b[i];
            if(b[i]%2==0)y++;
        }

        if((k%2==0 && x<=y)||(k%2==1 && x>=y))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
    return 0;
}
