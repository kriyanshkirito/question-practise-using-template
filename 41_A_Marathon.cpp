#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        vector<int> a(4);
        for(int i=0;i<4;i++){
            cin>>a[i];
        }
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            if (a[i + 1] > a[0])
            {
                count++;
            }
        }
        cout << count << endl;
    }
}