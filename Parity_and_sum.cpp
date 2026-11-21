#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

    vector<int>ev;
    long long s=-1;
        for(int it: a ){
            if(it %2==0)
            {
                ev.push_back(it);
            }
            else {
                if(it>s)s=it;
                              

        }
    }
      sort(ev.begin(), ev.end());
    long long ans;
    
        if(s==-1 ||ev.size()==0)
        {
            ans=0;
       
        }
        else {
     ans= ev.size();

    
        for(int  i: ev){
if (i<s){
    s+= i;

}
else 
{
    ans+=1;
break;
}
        }
        
    }

        cout<<ans<<endl;
    }
}