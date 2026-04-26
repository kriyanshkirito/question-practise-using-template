//https://codeforces.com/problemset/problem/750/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
   int tfc=240-k;
    int sum=0;
    int count=0;
     int temp=tfc;
    for(int i=1;i<=n;i++){
       
       
        sum=sum+5*i;

        if(sum>tfc){
           break;
            
        }else{
             count++;
        }
       
        
    }
  
   cout<<count<<endl;

}
