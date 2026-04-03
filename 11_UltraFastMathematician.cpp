// question link=> https://codeforces.com/problemset/problem/61/A

//solution

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    string n;
    cin>>n;
    string m;
    cin>>m;
    string ans;
    for(int i=0;i<n.size();i++){
       ans.push_back(n[i]^m[i]);
    }
    for(int val:ans) cout<<val;
   
 
}

// in this question we directly not apply XOR taking int a and b a^b because if we store 00101 as int then it come as 101 so leading zero will be lost and our output will come wrong, so we have to use strings



