// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/WATSCORE



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;;
	    unordered_map<int,int>map;
	    for(int i=1;i<=n;i++){
	        int p,s;
	        cin>>p>>s;
	       map[p]=max(map[p],s);
	    }
	    int sum=0;
	    for(auto& p:map) {
	        if(p.first!=9 && p.first!=10 && p.first!=11)
	        sum=sum+p.second;
	    }
	    
	    cout<<sum<<endl;
	  
	}

}

/* in this question i learn that if there are two value for same key(ex 2->15 and 2->45)  we want to store in map a max value
 then we sould use map[index]=max(map[index],value)  this stores first key value if the same key value come check whcih is max and store max key value
*/


