https://codeforces.com/problemset/problem/723/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
 int d1=abs(a-b);
 int d2=abs(b-c);
 int d3=abs(c-a);
 if(d1>d2 && d1>d3){
    cout<<d2+d3<<endl;
 }else if(d2>d1 && d2>d3){
    cout<<d1+d3<<endl;

 }else{
    cout<<d1+d2<<endl;
 }

}