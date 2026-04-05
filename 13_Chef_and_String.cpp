// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/CHEFSTR1



#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<long long>a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    long long sum=0;
	    for(int i=1;i<n;i++){
	       sum=sum +abs(a[i-1]-a[i]);
	    }
	    cout<<sum -(n-1)<<endl;
	}
	

}





