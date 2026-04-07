//https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/QTOO_2523?tab=statement



// thi squestion simply means if there is duplicate char then our answer would be n-2 (because we have said to find mac subsequence)if there is not duplicate value answer would be -1
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    unordered_map<char,int>freq;
	    for(char x:s) freq[x]++;
	    int sum=0;
	    int rep=0;
	    
	    for(auto & p:freq){
	       if(p.second>rep && p.second>1){
	           rep=p.second;
	           
	           
	           
	       }
	    }
	    if(rep>=2){
	        cout<<n-2<<endl;
	    }else{
	        cout<<-1<<endl;
	    }
	 
	    
	  
	
	}	

}