// https://codeforces.com/problemset/problem/1899/A
#include <iostream>
#include<numeric> 
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        if(n%3==0){
            cout<<"Second"<<endl;
        }else{
            cout<<"First"<<endl;
        }

    }
}
// if number is not divisble by 3 then by adding or subtracting the nuber will definetly got divible by 3 like 4 if add 5 if we subtract become 3 so divisble
// but what happen in 3 is that if if add become 4 or 2 the its volva chance see again made it to 3 so it become loop