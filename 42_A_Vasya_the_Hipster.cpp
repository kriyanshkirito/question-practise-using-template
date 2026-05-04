// https://codeforces.com/problemset/problem/581/A

#include <iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<b<<" "<<abs(a-b)/2<<endl;
    }else{
        cout<<a<<" "<<abs(a-b)/2<<endl;
    }
}