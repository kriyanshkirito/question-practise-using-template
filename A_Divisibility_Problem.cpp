// https://codeforces.com/problemset/problem/1328/A




//solution

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b;
    cin>>a>>b;
    if(a%b==0){
        cout<<"0"<<endl;
    }else if(a>b){
        cout<<abs((a-b)%b-b)<<endl;

    }else{
        cout<<abs(a-b)%b<<endl;
    }
}
}