// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/BLACKJACK

#include <bits/stdc++.h>
#include<numeric>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int a,b;
	    cin>>a>>b;
	    vector<int>v(10);
	    iota(v.begin(),v.end(),1);
	    int count=0;
	    for(int i=0;i<10;i++){
	        if(v[i]+a+b==21){
	            cout<<v[i] <<endl;
	            count++;
	            
	            
	            }
	    }
	    if(count!=1){
	        cout<<-1<<endl;
	    }
	}

}
// learn to use iota to slice iota(v.begin,v.end(),1);
// iota(begin, end, start_value)


