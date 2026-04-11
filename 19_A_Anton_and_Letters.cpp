#include <bits/stdc++.h>
using namespace std;
int main(){
string s={"{b, a, b, a}"};
// cin>>s;
set<int>set;
for(int i=0;i<s.size();i++){
    if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' '){
        continue;
    }else{
        set.insert(s[i]);
    }

}

cout<<set.size()<<endl;

}

