#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
bool ok= false;
int ans;
for(int i=(n+1)/2; i<=n; i++){
    if(i%m==0)

    {ok= true;
ans= i;
    break;
}

else ok= false ;
}
cout<<(ok? ans: -1)<<endl;
return 0;

}