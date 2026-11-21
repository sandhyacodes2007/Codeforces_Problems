#include<bits/stdc++.h>
using namespace std;
const long long  mod= 1e9+7;
int main(){
    int t;
    cin>>t;
    while(t--){
long long n;cin>>n;

long long sum=0;
long long i=1,j=1;
while(i<n && j<n){

if(i*j+1 >=i+1*j){
    sum+=i*(j+1);

j= j+1;

}
else{
sum+= (i+1)*j;
i=i+1;
}
}
int ans= (2022*sum)%mod ;

cout<<ans<<endl;



    }
    return 0;
}

///
#include<bits/stdc++.h>
using namespace std;
int mod=1e9+7;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		cout<<((((n*(n+1))%mod)*(4*n-1))%mod*337)%mod<<endl;
	}
}

//ans= n(n+1)*(4n+1)/6