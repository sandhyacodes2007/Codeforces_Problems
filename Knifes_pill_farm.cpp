#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n,m;
        cin>>n>>m;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }


    }
}

#include<bits/stdc++.h>
using namespace std;
#define int long long
void solve(){
int n,m,x,s=0,a=-4e18;
cin>>n>>m;
priority_queue<int>q;
for(int i=0;i<n;++i){
cin>>x;
if(i>=m-1)a=max(a,m*x-s);
q.push(x);s+=x;
if(q.size()>m-1)s-=q.top(),q.pop();
}cout<<a<<'\n';
}
signed main(){
    int t;
    cin>>t;
    while(t--)
    solve();
}