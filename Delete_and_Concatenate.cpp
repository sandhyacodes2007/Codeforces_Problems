/*#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, c;
        cin>>n>>c;
        vector<ll> a(n);
        ll sumA = 0;
        for(int i = 0; i < n; i++){
            cin>>a[i];
            sumA += a[i];
        }
        
        vector<ll> P;
        for(int i = 0; i < n; i++){
            ll b = c - a[i];
            if(b > 0) P.push_back(b);
        }
        
        ll p = P.size();
        ll q = n - p;
        ll captured = 0;
        
        if(q >= p){
            for(ll v : P) captured += v;
        } else {
            sort(P.begin(), P.end()); // ascending
            ll r = p - q;
            
            // free-ride: top q elements
            for(ll i = p - q; i < p; i++) captured += P[i];
            
            // self-pair among bottom r elements: capture top half of those
            ll start = (r + 1) / 2; // ceil(r/2)
            for(ll i = start; i < r; i++) captured += P[i];
        }
        
        ll ans = sumA - c * n + captured;
        printf("%lld\n", ans);
    }
    return 0;
}
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        long long c;
        cin>>n>>c;
        vector<long long>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());

        long long score=0;
        for(int i=0; i<n; i++) score+=a[i];
        score-=(long long)n*c;

        int maxPairs=n/2;
        for(int i=0; i<maxPairs; i++){
            long long gain=c-a[i];
            if(gain<=0) break;
            score+=gain;
        }

        cout<<score<<endl;
    }
}