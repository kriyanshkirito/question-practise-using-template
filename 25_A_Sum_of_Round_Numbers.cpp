#include <bits/stdc++.h>
using namespace std;


void solve() {
    string s;
    cin >> s;
    vector<string> rounds;

    for (int i = 0; i < s.size(); i++) {
        // Only process non-zero digits
        if (s[i] != '0') {
           
            string roundNum = s[i] + string(s.size() - 1 - i, '0'); // digit +(numberof digit -1 +iterator)   in string addiditon of string possible "Hi"+"Ar" =>hiAr
            rounds.push_back(roundNum);
        }
    }

   
    cout << rounds.size() << endl;
    
    for (int i = 0; i < rounds.size(); i++) {
        cout << rounds[i] << (i == rounds.size() - 1 ? "" : " "); // if size reach at end then no apace if not then leave space
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

