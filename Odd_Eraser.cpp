#include<bits/stdc++.h>
using namespace std;
int t,n,a[105];
int main()
{
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(int i=1;i<=n;i++) cin>>a[i];
		cout<<__gcd(a[1],a[n])<<'\n';
	}
	return 0;
}