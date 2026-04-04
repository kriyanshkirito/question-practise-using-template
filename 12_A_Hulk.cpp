// https://codeforces.com/problemset/problem/705/A



#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0 && i!=n){
            cout<<"I love that ";
        }else if(i%2==0 && i==n){
           cout<<"I love it ";
        }else if(i%2!=0 && i!=n){
            cout<<"I hate that ";
        }else if(i%2!=0 && i==n){
            cout<<"I hate it ";
        }else{
            if(i==1 && n==1){
             cout<<"I hate it ";
            }
            
        }
    }
}