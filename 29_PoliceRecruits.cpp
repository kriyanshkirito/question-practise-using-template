#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];

    }

   int count=0,pav=0;
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pav=a[i];
            
           
            
        }else{
            if(pav>0){
                pav--;
            }else{
                count++;
            }

        
            
          
        }
    }
    cout<<count<<endl;
}




