#include <iostream>
using namespace std;
int main(){
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int c1=0;
    
     for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            c1++;
        }
    
     }
     cout<<c1<<endl;
     


}

// learn that if we want to find common element then use or opration 
// let k,l,m,n==2,3,4,5 how here or work when 2 goes 2%2 ==0 then it count++ not check other condition similarly for all 