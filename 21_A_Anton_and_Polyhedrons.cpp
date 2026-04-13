#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {

        string s;
        cin >> s;

        if (s == "Icosahedron")
        {
            sum = sum + 20;
        }
        else if (s == "Cube")
        {
            sum = sum + 6;
        }
        else if (s == "Tetrahedron")
        {
            sum = sum + 4;
        }
        else if (s == "Dodecahedron")
        {
            sum = sum + 12;
        }
        else if(s=="Octahedron"){
           sum=sum+8;
        }
    }
    cout << sum << endl;
}