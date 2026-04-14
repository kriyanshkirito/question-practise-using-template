// https://codeforces.com/problemset/problem/510/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            cout<<string(m,'#')<<endl;;
        }else if(i%4!=0){
            cout<<string(m-1,'.')<<"#"<<endl;
        }else{
            cout<<"#"<<string(m-1,'.')<<endl;
        }
    }

    
}





// learn if we want string ouput in one row #### then we can use string(m,'#)  pahela wala character no of chanrater chaiye wo hai aur dura wala charater hai
    