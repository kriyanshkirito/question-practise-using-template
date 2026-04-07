// https://codeforces.com/problemset/problem/520/A




// in this concept is very simple we have to find a string which contain all values of english alphabet is count of unique value greater than  equal to 26 thne it is pangram


#include <bits/stdc++.h>
using namespace std;

int main()
{
        int n;
        cin>>n;
        string s;
        cin>>s;
        for (auto &c : s) c = tolower(c);    // this covert string value to lower value in easy way
        
        unordered_map<char, int> freq;
        for (char x : s)
            freq[x]++;

        int count = 0;
        for (auto &p : freq) count++;
       

       // cout<<count<<endl;
      
        if(count>=26){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
   
}
