#include <bits/stdc++.h>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
   
    for(int i=1;i<=9;i++){
        int tc=k*i;

        if(tc%10==0 || tc%10==r){
            cout<<i<<endl;
            break;
        }
     
    }

}