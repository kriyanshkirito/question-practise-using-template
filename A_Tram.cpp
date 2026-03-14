#include <bits/stdc++.h>
using namespace std;

/* ---------------- Fast IO ---------------- */
#define fastio ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

/* ---------------- Shortcuts ---------------- */
#define ll long long
#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()

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

int maxsubarray(vector<int> & nums){
    int currsum=0;
    int maxsum=nums[0];
    for(int val:nums){
        currsum=currsum+val;
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    return maxsum;
}

void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        int personin=b-a;
        v.pb(personin);
    }
    
    cout<<maxsubarray(v);
    
    

}

/* ---------------- Main ---------------- */

int main(){

    fastio;

    
        solve();
    

}





