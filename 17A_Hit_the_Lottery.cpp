#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
     int n;
    cin >> n;
    vector<int> a = {100,20,10,5,1};
   

    int count = 0;
   for(int i=0;i<5;i++){
    count +=n/a[i];
    n%=a[i];
   }
   cout<<count<<endl;


}



   

