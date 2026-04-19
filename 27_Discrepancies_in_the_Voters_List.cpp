//https://www.codechef.com/practice/course/1-star-difficulty-problems/DIFF1200/problems/VOTERS

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
int n1,n2,n3;
cin>>n1>>n2>>n3;
map<int,int>freq;
for(int i=0;i<n1;i++){
    int x;
    cin>>x;
   freq[x]++;
}

for(int i=0;i<n2;i++){
    int x;
    cin>>x;
   freq[x]++;
}

for(int i=0;i<n3;i++){
    int x;
    cin>>x;
   freq[x]++;
}
vector<int>m;
for(auto &p:freq){
    if(p.second>1){
      m.push_back(p.first);
    }
}
cout<<m.size()<<endl;
for(int val:m) cout<<val<<endl;



}
