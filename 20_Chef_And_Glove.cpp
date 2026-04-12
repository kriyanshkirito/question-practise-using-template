#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector < int > a(n);
        for (int i = 0; i < n; i++) {

            cin >> a[i];
        }
        vector < int > b(n);
        
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        
        int count = 0;
       
        for (int i = 0; i < n; i++) {
            if ((a[i] - b[i])<=0){
                count++;
            }
        }
        
        reverse(b.begin(), b.end());
        int count1 = 0;
        for(int i=0;i<n;i++){
            if(a[i]<=b[i]){
                count1++;
            }
        }
        
        // cout<<count<<" "<<count1<<endl;
        
        if(count==n && count1==n){
            cout<<"both"<<endl;
        }else if(count==n && count1!=n){
            cout<<"front"<<endl;
        }else if (count!=n && count1==n){
            cout<<"back"<<endl;
        }else{
            cout<<"none"<<endl;
        }


    }


}