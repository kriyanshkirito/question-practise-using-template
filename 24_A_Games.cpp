#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    if (!(cin >> n)) return 0;

    // Arrays to store home and guest colors
    vector<int> home(n);
    vector<int> guest(n);

    // Reading the input
    for (int i = 0; i < n; i++) {
        cin >> home[i] >> guest[i];
    }

    int count = 0;

    // Check every pair of teams (i = host, j = guest)
    // we use nested loop becuse size of n<5000
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // A team doesn't play itself
            if (i != j) {
                // If host's home color matches guest's guest color
                if (home[i] == guest[j]) {
                    count++;
                }
            }
        }
    }

    cout <<count << endl;

    return 0;
}