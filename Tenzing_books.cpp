#include<bits/stdc++.h>
using namespace std;
long long t,n,x,temp,a[200005];
int main(){
	cin>>t;
	while(t--){
		cin>>n>>x;
		temp=0;
		for(int k=1;k<=3;k++){
			for(int i=1;i<=n;i++)cin>>a[i];
			for(int i=1;i<=n;i++)
				if((x|a[i])==x)temp|=a[i];
				else break;
		}
		if(temp==x)cout<<"Yes\n";
		else cout<<"No\n";
	}
} 