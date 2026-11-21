#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
int cnt=0;
    vector<string>drinks= {"ABSINTH","BEER","BRANDY", "CHAMPAGNE","GIN", "RUM", "SAKE", "TEQUILA","VODKA", "WHISKEY", "WINE"};
for(int i=0; i<n; i++){
    string s;
    cin>>s;
    if(isdigit(s[0])){
       if(stoi(s)<18)
        cnt++;

       
    }
else if(find(drinks.begin(),drinks.end(), s)!= drinks.end()){
    cnt++;
}
}
cout<<cnt<<endl;
return 0;

}