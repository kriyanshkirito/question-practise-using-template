// codechef double dicount question


#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector < int > a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];




        int mtast = 0;
        bool found = false;
        for (int i = 0; i < n; i++) {
            for (int j = i+1; j < n; j++) {
                int a1 = max(a[i], a[j]);
                int a2 = min(a[i], a[j]);
                int d = min(a1 / 2, 100);
                int mins = a2 + (a1 - d);
                if (mins <= k) {
                    mtast = max(mtast, b[i]+ b[j]);
                    found=true;

                }
            }
        }
        if (found) {
            cout << mtast << endl;
        } else {
            cout << 0 << endl;
        }

    }
}