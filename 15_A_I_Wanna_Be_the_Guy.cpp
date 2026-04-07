// https://codeforces.com/problemset/problem/469/A



#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here

    int n;
    cin >> n;
    int p;
    cin>>p;
     set<int>s;

    for(int i=0;i<p;i++){
        int val;
        cin>>val;
        s.insert(val);

    }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
         int val;
        cin>>val;
        s.insert(val);

        

    }
    
    

    if(s.size()==n){
        cout<<"I become the guy."<<endl;
    }else{
        cout<<"Oh, my keyboard!"<<endl;
    }
}


