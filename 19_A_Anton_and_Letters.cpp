#include <bits/stdc++.h>
using namespace std;
int main(){
string s;
getline(cin,s);
set<char>t;
for(int i=0;i<s.size();i++){
    if(s[i]=='{' || s[i]=='}' || s[i]==',' || s[i]==' '){
        continue;
    }else{
        t.insert(s[i]);
    }

}

cout<<t.size()<<endl;

}

