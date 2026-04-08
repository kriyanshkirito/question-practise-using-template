// https://codeforces.com/problemset/problem/144/A



#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int min=a[0];
    int max=0;
    int minI=0;
    int maxI=0;;
   
    for (int i = 0; i < n; i++) {
        if(a[i]>max){
            max=a[i];
            maxI=i;

        }

       
        
    }
    int count=0;
     for (int i = 0; i < n; i++) {
        
        if(a[i]<=min){
            min=a[i];
            minI=i;
        }
        
        
        
    }
    // cout<<count<<endl;
    
    
    if(maxI>minI){
        cout<<(maxI-1)+(n-minI)-1<<endl;;
    }else{
        cout<<(maxI-1)+(n-minI);
    }
  
    return 0;
}