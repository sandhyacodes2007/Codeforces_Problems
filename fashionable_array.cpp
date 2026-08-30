/*#include <bits/stdc++.h>

using namespace std;

int min_operations_to_make_fashionable(vector<int>& a) {
   int n= a.size();
   int min_op=0;
   int min= INT_MAX;
   int max= INT_MIN;
   for(int i=0; i<n; i++){
    if((min+max)% 2==0)return min_op;
    else
    {
        a.erase(remove(a.begin(), a.end(), min),a.end());
        min_op++;
    }
   }
   return min_op;

}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        cout << min_operations_to_make_fashionable(a) << endl;
    }
    return 0;
}
    */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_operations_to_make_fashionable(const vector<int>& a) {
    int min_val = *min_element(a.begin(), a.end());
    int max_val = *max_element(a.begin(), a.end());

    if ((min_val + max_val) % 2 == 0) {
        return 0; 
    }
    
    // Count odd and even numbers
    int odd = 0, even = 0;
    for (int num : a) {
        if (num % 2 == 0) even++;
        else odd++;
    }
    return min(odd, even);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        cout << min_operations_to_make_fashionable(a) << endl;
    }
    return 0;
}