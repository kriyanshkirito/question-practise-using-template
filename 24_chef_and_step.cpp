#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
      //  vector<int>r;
        for(int i=0;i<n;i++){
            if (a[i] % k==0) {
                cout<<"1";
            } else {
                cout<<"0";
            }
        }
       cout<<endl;
    }

}