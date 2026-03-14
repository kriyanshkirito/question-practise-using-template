// #include <iostream>
// using namespace std;
// #include <unordered_set>
// #include <algorithm>
// bool isuniquechar(string & s){
//     unordered_set<char>unique_char(s.begin(),s.end());
//     if(s.size()==unique_char.size()){
//         return true;
//     }
//    return false;
// }
// int main(){
//         string s;
//         cin >> s;
//         string result;
//         int num;
//         while(true) {
//             num = stoi(s) + 1;
//             result = to_string(num);
//             if(isuniquechar(result)) {
//                 break;
//             }
//             s = result;
//         }
//         cout << result << endl;
    
//     return 0;
    
// }

/* method 2 using template*/
#include <bits/stdc++.h>
using namespace std;

/* ---------------- Fast IO ---------------- */
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* ---------------- Shortcuts ---------------- */
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()  /*we can use it sort(v.begin,v.end()) then we use as sort(all(v))*/

/* ---------------- Constants ---------------- */
const int MOD = 1e9+7;
const int INF = 1e9;

/* ---------------- Useful Functions ---------------- */

ll gcd(ll a, ll b){
    if(b==0) return a;
    return gcd(b, a%b);
}

ll lcm(ll a, ll b){
    return (a/gcd(a,b))*b;
}

bool isPrime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}

bool uniqueChar(string s){
    unordered_set<char> st(s.begin(), s.end());
    return s.size()==st.size();
}

/* ---------------- Problem Solve ---------------- */

void solve(){
 string s;
 cin>>s;
 string result;
 int num;
 while(true){
    num=stoi(s)+1;
    result=to_string(num);
    if(uniqueChar(result)){
        break;
    }
    s=result;
 }
 cout<<result<<endl;
    

}



int main(){

    fastio;

    int t;
    cin>>t;

    while(t--){
        solve();
    }

}
