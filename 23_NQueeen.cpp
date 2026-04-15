// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/EUREKA

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    
	    int y=pow((0.143*n),n);
	    double yd=pow((0.143*n),n);
	    if(yd-y<0.5){
	        cout<<y<<endl;
	    }else{
	        cout<<y+1<<endl;
	    }

}
}