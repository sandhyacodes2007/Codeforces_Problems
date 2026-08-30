/*#include<bits/stdc++.h>
using namespace std;

int  main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a ;
        for(int i=0; i<n; i++){
            int x;
            cin>>x;
            a.push_back(a[0]);
        
            if( !a.empty() &&a.back()>x)
            {
                a.push_back(x);
            a.push_back(x);
            }
            else 
            a.push_back(x);

        }
        cout<<a.size();
        for(int i=0; i<a.size(); i++)
            cout<<a[i]<<"\n";
        
        

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
        cin>>n;

        vector<int> a;

        for(int i=0;i<n;i++){
            int x;
            cin>>x;

            if(!a.empty() && a.back()>x){
                a.push_back(x);
                a.push_back(x);
            }
            else{
                a.push_back(x);
            }
        }

        cout<<a.size()<<"\n";

        for(int i=0;i<a.size();i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }

    return 0;
}