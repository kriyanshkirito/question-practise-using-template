// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/GRPASSN (question link)



// solution

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }
	    
	    unordered_map<int,int>freq;
	    for(int x:v) freq[x]++;
	    int count=0;
	    vector<int>a;
	    
	    for(auto p:freq) {
	       if(p.second%p.first==0){
	           count++;
	           
	       
	       }
	       a.push_back(p.second);
	        
	    }
	  if(a.size()==count){
	       cout<<"Yes"<<endl;
	   }else{
	       cout<<"NO"<<endl;
	   }
	    
	}

}
