// https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/REMOVEBAD





#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    vector<int>a(n);
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    unordered_map<int,int>freq;
	    for(int x:a) freq[x]++;
	    int max=0;
	    for(auto &p :freq){
	        if(p.second>max){
	            max=p.second;
	        }
	    }
	    cout<<n-max<<endl;
	}

}
